# Security

## Scope

PasswordPolicyEnforcer est un proof of concept destiné à un environnement de laboratoire.

Une DLL de filtre de mot de passe s'exécute dans un composant de sécurité critique de Windows. Une DLL invalide, mal compilée ou mal enregistrée peut perturber l'authentification ou les changements de mot de passe.

## Recommandations

- tester d'abord dans une VM avec snapshot ;
- ne jamais remplacer les packages Windows existants dans `Notification Packages` ;
- conserver une copie de la configuration du registre avant modification ;
- utiliser une DLL x64 sur un système Windows x64 ;
- prévoir un accès de récupération hors du système testé ;
- ne pas déployer ce proof of concept directement en production sans revue, tests et procédure de retour arrière ;
- ne jamais journaliser ni stocker les mots de passe manipulés par le filtre.

## Secrets

Aucun secret, identifiant réel, clé privée ou configuration d'entreprise ne doit être ajouté au dépôt.

## Signalement

Si vous identifiez une vulnérabilité dans le code, évitez de publier des données sensibles ou des secrets dans une issue publique.
