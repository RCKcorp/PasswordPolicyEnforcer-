# PasswordPolicyEnforcer

Proof of concept Windows en C++ montrant l'utilisation d'une DLL de filtrage de mots de passe pour appliquer une règle de longueur minimale.

> Ce dépôt est destiné à l'apprentissage et au laboratoire. Une DLL de filtre de mot de passe est chargée dans le processus de sécurité Windows ; une erreur peut empêcher des changements de mot de passe ou dégrader le fonctionnement du système. Testez uniquement sur une machine ou une VM que vous pouvez restaurer.

## Objectif

Le filtre fourni dans `dllmain.cpp` fixe actuellement :

```cpp
#define MIN_PASSWORD_LENGTH 16
```

Lorsqu'un mot de passe est défini ou modifié, le filtre vérifie sa longueur et rejette la valeur si elle est inférieure au seuil configuré.

Ce projet ne remplace pas une stratégie de sécurité complète. Les stratégies Windows/Active Directory, les contrôles de complexité, la protection des comptes et les procédures de récupération restent à définir séparément selon l'environnement.

## Principe Windows

Windows peut charger des packages de notification de mot de passe déclarés dans :

```text
HKLM\SYSTEM\CurrentControlSet\Control\Lsa\Notification Packages
```

Le code expose les fonctions attendues par le mécanisme de filtre :

- `InitializeChangeNotify`
- `PasswordChangeNotify`
- `PasswordFilter`

## Compilation

Créez un projet C++ DLL x64 avec Visual Studio, ajoutez `dllmain.cpp`, puis compilez en `Release`.

Les fichiers compilés (`*.dll`, `*.pdb`, dossiers `x64/`, `Release/`, etc.) sont volontairement exclus du dépôt Git.

## Déploiement de laboratoire

1. Construire la DLL x64.
2. Copier la DLL compilée dans `C:\Windows\System32`.
3. Ouvrir `regedit` avec des droits administrateur.
4. Aller dans :

```text
HKLM\SYSTEM\CurrentControlSet\Control\Lsa
```

5. Sauvegarder la valeur `Notification Packages` avant toute modification.
6. Ajouter le nom du filtre sans l'extension `.dll`.
7. Redémarrer la machine de test.

Ne supprimez ni ne remplacez les autres valeurs déjà présentes dans `Notification Packages`.

## Test simple

Le test suivant crée un compte local temporaire, tente deux mots de passe, puis supprime le compte :

```powershell
$Username = "test_mdp"
$PasswordInitial = "MotdepasseUltra123!"
$PasswordShort = "Court123!!!"
$PasswordLong = "MotdepasseUltra123!"

net user $Username $PasswordInitial /add /y /passwordchg:yes /passwordreq:yes
net user $Username $PasswordShort
net user $Username $PasswordLong
net user $Username /delete
```

Avec le seuil de 16 caractères, le mot de passe court doit être refusé par le filtre.

## Retour arrière

Avant les essais, conservez un moyen de restaurer la VM ou la machine.

Pour retirer le filtre :

1. supprimer uniquement son entrée dans `Notification Packages` ;
2. redémarrer Windows ;
3. supprimer la DLL personnalisée de `C:\Windows\System32` une fois qu'elle n'est plus chargée.

## Captures

Le dossier `img/` contient uniquement des illustrations des étapes de configuration Visual Studio et du registre.

## Sécurité

Consultez [`SECURITY.md`](SECURITY.md) avant tout essai. Le dépôt contient également un scan Gitleaks de l'historique Git afin de détecter les secrets ajoutés accidentellement.
