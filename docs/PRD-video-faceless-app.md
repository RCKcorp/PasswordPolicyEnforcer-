# PRD — Application de génération de vidéos faceless

## 1. Informations générales

- **Nom provisoire du produit** : Faceless Video Studio
- **Type de produit** : Application web SaaS
- **Version du document** : v1.0
- **Statut** : Draft exploitable
- **Objectif du document** : cadrer la conception, le MVP, les priorités produit, les flows utilisateurs et les contraintes de la future application.

---

## 2. Résumé exécutif

L’application a pour but de transformer une simple idée en vidéo faceless prête à publier. L’utilisateur fournit un sujet, un ton, une durée cible et un format. Le système génère ensuite un script, découpe le contenu en scènes, associe une voix off, des médias et des sous-titres, puis produit une vidéo exportable.

L’objectif du produit n’est pas de remplacer un logiciel de montage professionnel, mais de **réduire radicalement le temps de production** pour les créateurs qui veulent publier rapidement sans passer par 5 à 10 outils différents.

---

## 3. Problème à résoudre

Créer une vidéo demande aujourd’hui plusieurs étapes manuelles :

1. trouver l’idée
2. écrire un script
3. préparer une narration
4. trouver des visuels adaptés
5. faire le montage
6. ajouter des sous-titres
7. exporter le rendu final

Cette chaîne est lente, technique, morcelée et décourageante. Beaucoup d’utilisateurs abandonnent avant d’avoir un résultat publiable.

### Formulation produit du problème

> Les créateurs de contenu faceless perdent trop de temps à produire des vidéos simples, car la création est fragmentée entre plusieurs outils et trop de tâches manuelles.

---

## 4. Vision produit

### Vision

Permettre à n’importe quel créateur de transformer une idée en vidéo claire, propre et publiable en quelques minutes.

### Mission

Construire un outil simple, rapide et guidé pour générer des vidéos faceless sans expertise en montage.

### Positionnement

Le produit se positionne comme :

- plus simple qu’un logiciel de montage classique
- plus rapide qu’un workflow manuel
- plus spécialisé que les outils vidéo généralistes
- plus orienté résultat que création libre

---

## 5. Cible utilisateur

### Cible principale

- créateurs YouTube faceless
- freelances en création de contenu
- petites agences social media
- indépendants qui publient des vidéos explicatives
- entrepreneurs qui veulent produire du contenu régulier

### Cible secondaire

- formateurs
- coaches
- petites entreprises
- spécialistes marketing
- créateurs de shorts et reels éducatifs

### Cible à ne pas prioriser au démarrage

- studios vidéo avancés
- monteurs experts
- équipes ayant besoin de collaboration complexe
- production cinéma ou publicité haut de gamme

---

## 6. Personae

### Persona 1 — Créateur solo

- publie 2 à 5 vidéos par semaine
- ne veut pas passer des heures en montage
- cherche vitesse et simplicité
- accepte un rendu semi-automatique si le résultat est propre

### Persona 2 — Freelance marketing

- produit du contenu pour plusieurs clients
- veut réduire le coût de production
- a besoin d’un process répétable
- préfère un outil guidé avec peu de friction

### Persona 3 — Entrepreneur / formateur

- veut transformer ses idées en contenu régulier
- n’est pas monteur
- veut une vidéo correcte, rapide à produire et facilement exportable

---

## 7. Proposition de valeur

### Promesse principale

> Transforme une idée en vidéo faceless prête à publier en quelques minutes.

### Valeur utilisateur

- gain de temps
- réduction de la complexité
- moins d’outils à utiliser
- génération assistée de contenu
- résultat publiable plus rapidement

---

## 8. Objectifs produit

### Objectifs business

- valider qu’un produit simple peut convertir des utilisateurs intéressés par la vidéo faceless
- atteindre un premier usage récurrent via une V1 focalisée
- mesurer le taux de conversion entre création de projet et export final

### Objectifs utilisateurs

- produire une première vidéo sans compétence technique lourde
- pouvoir corriger le script avant génération
- obtenir un rendu exportable rapidement

### Objectifs de la V1

- livrer un flux complet de génération vidéo
- limiter les options inutiles
- rendre l’expérience guidée, compréhensible et exploitable

---

## 9. Périmètre produit

### Inclus dans le MVP

1. création de projet
2. saisie d’un sujet
3. choix du ton, du format et de la durée cible
4. génération de script
5. édition manuelle du script
6. découpage automatique en scènes
7. génération de voix off
8. génération ou association de médias par scène
9. génération de sous-titres
10. prévisualisation simple
11. export MP4

### Hors périmètre MVP

1. collaboration d’équipe avancée
2. commentaires internes
3. timeline de montage complète type Premiere
4. publication directe multi-plateformes
5. gestion avancée des rôles
6. facturation complexe au crédit
7. clonage de voix
8. duplication de style depuis une vidéo source
9. analytics avancées
10. bibliothèque de templates très riche

---

## 10. Hypothèses produit

- les utilisateurs acceptent un résultat partiellement automatisé si la vitesse est très bonne
- la génération de script est une étape à forte valeur perçue
- les utilisateurs veulent relire et corriger le script avant le rendu vidéo final
- un flux simple et guidé est plus important qu’un grand nombre d’options
- la qualité perçue dépend autant du texte et du rythme que des visuels

---

## 11. Parcours utilisateur principal

### Flow principal

1. l’utilisateur ouvre l’application
2. il crée un nouveau projet
3. il renseigne son sujet, son objectif, son ton et son format
4. le système génère un script
5. l’utilisateur relit et modifie le script
6. le système découpe le script en scènes
7. le système propose voix, médias et sous-titres
8. l’utilisateur prévisualise
9. il exporte la vidéo

### Critère de réussite du flow

Le flow complet doit être compréhensible sans tutoriel complexe et permettre un premier export sans blocage majeur.

---

## 12. User stories principales

### Écriture et script

- En tant qu’utilisateur, je veux saisir une idée simple afin d’obtenir un script structuré.
- En tant qu’utilisateur, je veux pouvoir modifier le script afin de garder le contrôle éditorial.
- En tant qu’utilisateur, je veux choisir un ton afin que la narration corresponde à mon objectif.

### Découpage et scène

- En tant qu’utilisateur, je veux que mon script soit automatiquement découpé en scènes afin de faciliter le montage.
- En tant qu’utilisateur, je veux voir les scènes séparément afin de pouvoir comprendre la structure de la vidéo.

### Audio et vidéo

- En tant qu’utilisateur, je veux générer une voix off automatiquement afin d’éviter l’enregistrement manuel.
- En tant qu’utilisateur, je veux que chaque scène reçoive un visuel cohérent afin d’obtenir une première vidéo exploitable.
- En tant qu’utilisateur, je veux des sous-titres afin d’améliorer la lisibilité et la rétention.

### Export

- En tant qu’utilisateur, je veux prévisualiser le résultat afin de vérifier avant export.
- En tant qu’utilisateur, je veux exporter en MP4 afin de publier ma vidéo facilement.

---

## 13. Fonctionnalités détaillées

## 13.1 Gestion des projets

### Description
Permet de créer, nommer, lister et rouvrir des projets vidéo.

### Exigences
- l’utilisateur peut créer un projet
- un projet a un titre
- un projet stocke son sujet, son script, ses scènes et ses médias associés
- un projet peut être rouvert plus tard
- un projet affiche un statut : brouillon, en génération, prêt, exporté

### Critères d’acceptation
- création projet en moins de 30 secondes
- les données du projet sont persistées
- la liste des projets affiche un état clair

---

## 13.2 Formulaire de création

### Champs minimum
- titre du projet
- sujet / prompt
- objectif de la vidéo
- ton
- durée cible
- format (vertical / horizontal)
- langue

### Critères d’acceptation
- les champs essentiels sont visibles en un seul écran
- l’utilisateur peut lancer la génération du script en un clic

---

## 13.3 Génération de script

### Description
Le système génère un script à partir de l’entrée utilisateur.

### Exigences
- le script doit être structuré et cohérent
- le ton doit influencer le texte
- la durée cible doit influencer la longueur
- l’utilisateur peut régénérer le script
- l’utilisateur peut éditer le texte manuellement

### Critères d’acceptation
- un script est généré pour 90 % des requêtes valides
- le script reste modifiable avant la suite du pipeline

---

## 13.4 Découpage en scènes

### Description
Le script est divisé automatiquement en scènes exploitables.

### Exigences
- chaque scène contient un extrait de narration
- chaque scène dispose d’une durée estimée
- chaque scène possède un prompt média
- l’utilisateur peut modifier les textes de scène

### Critères d’acceptation
- toutes les scènes sont visibles sous forme de liste claire
- la somme des durées reste cohérente avec la durée cible

---

## 13.5 Voix off

### Description
Le texte du script ou des scènes est transformé en narration audio.

### Exigences
- l’utilisateur peut choisir une voix parmi une liste simple
- le système génère un audio cohérent
- l’audio peut être relancé si nécessaire
- un aperçu audio doit être disponible

### Critères d’acceptation
- une préécoute est possible avant le rendu final
- l’audio reste rattaché au projet

---

## 13.6 Médias par scène

### Description
Chaque scène reçoit un média associé, automatique ou remplaçable.

### Exigences
- le système doit associer un visuel à chaque scène
- le média proposé doit être cohérent avec le prompt de scène
- l’utilisateur peut remplacer un média
- le projet conserve la correspondance scène / média

### Critères d’acceptation
- aucune scène ne reste vide lors d’une génération réussie
- le remplacement manuel ne casse pas le projet

---

## 13.7 Sous-titres

### Description
Le système génère des sous-titres synchronisés à partir du texte et/ou de l’audio.

### Exigences
- les sous-titres peuvent être activés ou désactivés
- les sous-titres suivent l’audio généré
- un style de sous-titres par défaut est proposé

### Critères d’acceptation
- les sous-titres apparaissent dans la preview
- le rendu exporté contient les sous-titres si l’option est active

---

## 13.8 Prévisualisation

### Description
Permet de voir le résultat avant export.

### Exigences
- l’utilisateur peut lire la vidéo
- l’utilisateur voit les sous-titres
- l’utilisateur peut revenir aux étapes précédentes

### Critères d’acceptation
- la prévisualisation charge sans erreur bloquante
- le retour vers l’édition est simple

---

## 13.9 Export

### Description
Génère un fichier MP4 téléchargeable.

### Exigences
- export MP4
- support du format horizontal ou vertical selon le projet
- historique minimal des exports
- statut d’export visible

### Critères d’acceptation
- l’utilisateur peut télécharger le fichier final
- le projet conserve la trace du dernier export réussi

---

## 14. Écrans produit

## 14.1 Écran Connexion / inscription

### But
Accéder à l’espace utilisateur.

### Éléments
- email
- mot de passe
- bouton connexion
- bouton inscription
- bouton essai gratuit

---

## 14.2 Dashboard

### But
Voir ses projets et relancer un flux.

### Éléments
- bouton nouveau projet
- liste des projets
- statut des projets
- accès à l’historique et aux exports

---

## 14.3 Création de projet

### But
Cadrer la vidéo avant génération.

### Éléments
- titre
- sujet
- objectif
- ton
- durée cible
- format
- langue
- bouton générer script

---

## 14.4 Éditeur de script

### But
Valider ou corriger le texte avant la suite.

### Éléments
- zone de texte
- régénérer
- raccourcir
- rallonger
- améliorer
- valider script

---

## 14.5 Vue Scènes

### But
Contrôler la structure de la vidéo.

### Éléments
- liste de scènes
- narration par scène
- prompt visuel
- durée estimée
- édition rapide

---

## 14.6 Voix et médias

### But
Configurer les éléments audiovisuels.

### Éléments
- choix voix
- préécoute
- aperçu des médias par scène
- remplacement média
- activer sous-titres

---

## 14.7 Prévisualisation

### But
Voir le résultat avant export.

### Éléments
- lecteur vidéo
- sous-titres visibles
- bouton retour édition
- bouton exporter

---

## 14.8 Export / Historique

### But
Télécharger et consulter les rendus.

### Éléments
- statut du rendu
- bouton téléchargement
- liste des exports précédents

---

## 15. Règles métier

- un projet possède un seul format principal à la fois
- un script doit être validé avant de lancer la génération vidéo complète
- une scène doit comporter au minimum : texte, durée estimée, média associé
- une génération longue doit être traitée comme une tâche de fond avec statut visible
- une vidéo ne peut pas être exportée si des éléments obligatoires sont absents
- l’utilisateur peut revenir en arrière avant l’export

---

## 16. Exigences non fonctionnelles

### Performance
- chargement initial raisonnable
- feedback immédiat sur les actions critiques
- génération asynchrone avec statut clair

### Fiabilité
- persistance des projets
- reprise des projets après déconnexion
- pas de perte silencieuse des données utilisateur

### UX
- interface guidée
- étapes claires
- peu de surcharge visuelle
- langage simple

### Sécurité
- authentification utilisateur
- séparation stricte des projets entre comptes
- stockage sécurisé des fichiers générés

### Scalabilité
- pipeline de génération découplé du frontend
- préparation à l’exécution de tâches de rendu en file d’attente

---

## 17. Dépendances fonctionnelles

Le produit dépend de plusieurs capacités :

- moteur de génération de texte
- moteur de synthèse vocale
- moteur de recherche ou génération de médias
- moteur de rendu vidéo
- stockage des projets et assets

Le PRD ne fige pas les choix techniques, mais impose la présence fonctionnelle de ces briques.

---

## 18. Contraintes et risques

### Risques principaux
- coût élevé de génération
- lenteur du rendu
- qualité irrégulière des médias
- scripts trop génériques
- complexité produit trop importante dès la V1

### Réduction du risque
- limiter la durée vidéo au démarrage
- limiter le nombre de voix et de styles
- concentrer la V1 sur un flow principal
- faire tester rapidement le produit à de vrais utilisateurs

---

## 19. KPI et métriques de succès

### KPI produit
- nombre de projets créés
- taux de passage création projet → script généré
- taux de passage script validé → export vidéo
- temps moyen création → export
- taux de retour utilisateur
- nombre moyen d’exports par utilisateur

### KPI business
- conversion gratuit → payant
- coût moyen de génération par vidéo
- revenu moyen par utilisateur payant

### KPI critique V1
- pourcentage d’utilisateurs qui vont jusqu’à l’export

---

## 20. Modèle économique envisagé

### Option recommandée
Freemium + abonnement

### Exemple de structure

#### Gratuit
- 1 ou 2 vidéos d’essai
- durée limitée
- watermark éventuel

#### Standard
- quota mensuel
- plus d’exports
- pas de watermark

#### Pro
- plus grand quota
- rendus supplémentaires
- options avancées futures

---

## 21. Priorisation produit

### Must Have
- création projet
- script
- édition script
- scènes
- voix off
- médias associés
- sous-titres
- preview
- export

### Should Have
- duplication de projet
- plusieurs variantes de script
- historique simple
- relance partielle d’une génération

### Could Have
- templates
- publication directe
- analytics
- travail en équipe

### Won’t Have for now
- timeline complète de montage
- collaboration complexe
- crédits complexes
- clonage de voix

---

## 22. Roadmap proposée

## Phase 1 — Cadrage
- finaliser positionnement
- figer le MVP
- dessiner les écrans
- cadrer les règles métier

## Phase 2 — Base produit
- authentification
- dashboard
- création de projet
- sauvegarde projets

## Phase 3 — Cœur de valeur
- génération de script
- édition de script
- découpage en scènes

## Phase 4 — Enrichissement audio/vidéo
- voix off
- sous-titres
- médias par scène

## Phase 5 — Rendu et export
- preview
- rendu vidéo
- export MP4

## Phase 6 — Amélioration V1
- correction UX
- réduction du temps de génération
- tests utilisateurs

---

## 23. Critères de succès V1

La V1 est considérée comme réussie si :

- un utilisateur peut créer un projet sans assistance
- il peut générer un script cohérent
- il peut corriger ce script
- il peut obtenir un rendu vidéo exportable
- le temps total reste compatible avec un usage régulier
- le flow principal ne comporte pas de blocage majeur

---

## 24. Questions ouvertes

- faut-il commencer par un seul format vidéo ou deux (vertical + horizontal) ?
- faut-il limiter la durée cible à un nombre réduit d’options ?
- faut-il imposer un type de contenu précis au lancement (ex. éducatif, faceless explicatif, shorts) ?
- quel niveau de contrôle manuel faut-il laisser dès la V1 ?
- faut-il viser d’abord desktop web uniquement ?

---

## 25. Décision produit recommandée

Pour maximiser les chances de finir le produit et de le tester vite :

- lancer une **V1 focalisée**
- garder un seul flow principal
- limiter les options avancées
- privilégier vitesse, lisibilité et simplicité
- ne pas chercher à refaire un studio vidéo complet dès le départ

---

## 26. Résumé décisionnel

### Ce qu’on construit
Une application web de génération de vidéos faceless guidée, simple et rapide.

### Ce qu’on ne construit pas encore
Un logiciel de montage professionnel complet.

### Le cœur du produit
- idée
- script
- scènes
- voix
- médias
- sous-titres
- export

### Priorité absolue
Amener l’utilisateur jusqu’à un export utile avec le moins de friction possible.
