// MyPassFilt.cpp : Définit les fonctions exportées pour la DLL.

#include <windows.h>
#include <ntsecapi.h>
#include <wchar.h>
#include <stdio.h>

#define MIN_PASSWORD_LENGTH 16

// Fonctions de PassFilt.dll
typedef BOOLEAN(__stdcall* PFN_PasswordFilter)(
    PUNICODE_STRING, PUNICODE_STRING, PUNICODE_STRING, BOOLEAN);
typedef NTSTATUS(__stdcall* PFN_PasswordChangeNotify)(
    PUNICODE_STRING, ULONG, PUNICODE_STRING);
typedef BOOLEAN(__stdcall* PFN_InitializeChangeNotify)(void);

HMODULE hRealDLL = NULL;
PFN_PasswordFilter pRealPasswordFilter = NULL;
PFN_PasswordChangeNotify pRealPasswordChangeNotify = NULL;
PFN_InitializeChangeNotify pRealInitializeChangeNotify = NULL;

void LoadRealPassFiltDLL() {
    if (!hRealDLL) {
        hRealDLL = LoadLibraryW(L"C:\\Windows\\System32\\PassFilt.dll");
        if (hRealDLL) {
            pRealPasswordFilter = (PFN_PasswordFilter)GetProcAddress(hRealDLL, "PasswordFilter");
            pRealPasswordChangeNotify = (PFN_PasswordChangeNotify)GetProcAddress(hRealDLL, "PasswordChangeNotify");
            pRealInitializeChangeNotify = (PFN_InitializeChangeNotify)GetProcAddress(hRealDLL, "InitializeChangeNotify");
        }
    }
}


// Export standard
extern "C" {

    __declspec(dllexport)
        BOOLEAN __stdcall InitializeChangeNotify(void) {
        LoadRealPassFiltDLL();
        return pRealInitializeChangeNotify ? pRealInitializeChangeNotify() : TRUE;
    }

    __declspec(dllexport)
        NTSTATUS __stdcall PasswordChangeNotify(
            PUNICODE_STRING UserName, ULONG RelativeId, PUNICODE_STRING NewPassword) {
        LoadRealPassFiltDLL();
        return pRealPasswordChangeNotify ? pRealPasswordChangeNotify(UserName, RelativeId, NewPassword) : 0;
    }

    __declspec(dllexport)
        BOOLEAN __stdcall PasswordFilter(
            PUNICODE_STRING AccountName, PUNICODE_STRING FullName, PUNICODE_STRING Password, BOOLEAN SetOperation) {

        LoadRealPassFiltDLL();

        DWORD len = Password ? Password->Length / sizeof(wchar_t) : 0;
        bool accepted = (len >= MIN_PASSWORD_LENGTH);

       

        if (!accepted)
            return FALSE;

        return pRealPasswordFilter ? pRealPasswordFilter(AccountName, FullName, Password, SetOperation) : TRUE;
    }

}