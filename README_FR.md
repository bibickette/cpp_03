🇬🇧 English version available [here](README.md)
* * *
# Présentation du projet `cpp_03`
## Description
Ce projet introduit le concept d’**héritage** en C++ et se concentre sur la compréhension des relations entre les classes.

Les exercices permettent de comprendre comment les classes de base et les classes dérivées interagissent, comment les constructeurs et destructeurs se comportent dans une hiérarchie d’héritage, et comment réutiliser du code correctement tout en respectant les principes de la programmation orientée objet.

* * *
## Langages & Technologies

**Langage**
- C++ (standard C++98)

**Technologies**
- Makefile

* * *
## Concepts clés
- Héritage des classes (classes de base et classes dérivées)
- Ordre d’appel des constructeurs et destructeurs
- Spécificateurs d’accès (`public`, `protected`, `private`)
- Réutilisation de code
- Héritage multi-niveaux
- Ambiguïté et résolution de portée

* * *
## Aperçu des exercices
### ex00. Aaaaand... OPEN!
Introduction à l’héritage :
- Création d’une classe de base
- Dérivation d’une nouvelle classe à partir de celle-ci
- Compréhension de l’ordre d’appel des constructeurs et destructeurs
- Réutilisation des attributs et fonctions membres

### ex01. Serena, my love!
Héritage avec extension du comportement :
- Ajout de nouveaux attributs dans une classe dérivée
- Redéfinition de comportements
- Compréhension des spécificateurs d’accès (`public`, `protected`, `private`)
- Réutilisation du code sans duplication

### ex02. Repetitive work
Plusieurs classes dérivées :
- Création de plusieurs classes héritant d’une même classe de base
- Spécialisation du comportement pour chaque classe dérivée
- Compréhension de la réutilisation des fonctions de la classe de base
- Gestion correcte des constructeurs et destructeurs

### ex03. Now it’s weird!
Relations d’héritage plus complexes :
- Combinaison de plusieurs niveaux d’héritage
- Compréhension des ambiguïtés et de la résolution de portée
- Renforcement d’une conception de classes propre
- Garantie d’une initialisation et destruction correctes des objets

* * *

## Règles de compilation

Tous les exercices sont compilés avec les flags suivants :
- `-Wall`
- `-Wextra`
- `-Werror`
- `-std=c++98`



* * *
# Utilisation de `cpp_03`

## **Comment utiliser `cpp_03`**

*Note : ce dépôt contient uniquement le module `cpp_03`. Il fait partie du dépôt global [cpp_modules](https://github.com/bibickette/cpp_modules), qui regroupe l’ensemble des modules C++.*
1. Clonez `cpp_03` dans un dossier : `git clone https://github.com/bibickette/cpp_03.git`
2. Déplacez-vous dans le dépôt : `cd cpp_03`
3. Compilez le module : `make`; cela compilera tous les exercices du module
4. Vous pouvez maintenant vous rendre dans chaque dossier d’exercice et lancer les exécutables correspondants

* * *

*Date de validation du projet : 17 mars 2025*