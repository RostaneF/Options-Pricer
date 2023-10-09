# Options Pricer

## Description
Options Pricer est un projet qui fournit une bibliothèque de classes et de méthodes pour calculer les prix des options financières en utilisant divers modèles et méthodes, tels que le modèle Black-Scholes, le modèle binomial de Cox-Ross-Rubinstein, et plus encore. Le projet offre également la possibilité de travailler avec différents types d'options, comme les options américaines, asiatiques, et digitales.

## Table of Contents
- [Code Structure](#code-structure)
- [Implementation in Main](#implementation-in-main)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Descriptions des fichiers](#descriptions-des-fichiers) 

## Code Structure

### Header Files
Chaque fichier `.h` définit une classe ou une fonctionnalité spécifique utilisée dans le projet. Vous trouverez ci-dessous une brève description de chaque fichier.

[Descriptions des fichiers](#descriptions-des-fichiers)

## Implementation in Main
Le fichier `main` utilise diverses classes d'options et modèles de tarification pour calculer et afficher les prix des options en fonction des paramètres définis par l'utilisateur. Différents types d'options et modèles de tarification sont instanciés et utilisés pour démontrer la fonctionnalité des classes et algorithmes de tarification implémentés.

## Getting Started
Pour commencer avec ce projet, clonez ce dépôt et compilez le code à l'aide d'un compilateur C++.

```bash
git clone https://github.com/RostaneF/Options-Pricer.git
cd Options-Pricer
```
Ensuite, suivez les instructions de compilation et d'exécution dans la section [Usage](#usage).

## Usage
Après avoir compilé le projet, vous pouvez exécuter le binaire pour obtenir les prix des options en fonction des paramètres définis dans le fichier `main`.

```bash
./OptionsPricer
```

Assurez-vous de configurer les paramètres de l'option et du modèle de pricing dans le fichier main avant de compiler et d'exécuter le programme.

## Descriptions des fichiers

### [AmericanCallOption.h](https://github.com/RostaneF/Options-Pricer/blob/main/Code/AmericanCallOption.h)
Définit la classe `AmericanCallOption`, utilisée pour représenter une option d'achat américaine et calculer son prix.

### [AmericanOption.h](https://github.com/RostaneF/Options-Pricer/blob/main/Code/AmericanOption.h)
Définit la classe `AmericanOption`, qui sert de classe de base pour les options américaines, fournissant des fonctionnalités et attributs communs.

### [AmericanPutOption.h](https://github.com/RostaneF/Options-Pricer/blob/main/Code/AmericanPutOption.h)
Définit la classe `AmericanPutOption`, représentant une option de vente américaine et fournissant des fonctionnalités pour calculer son prix.

### [AsianCallOption.h](https://github.com/RostaneF/Options-Pricer/blob/main/Code/AsianCallOption.h)
Définit la classe `AsianCallOption`, utilisée pour représenter une option d'achat asiatique et calculer son prix.

### [AsianOption.h](https://github.com/RostaneF/Options-Pricer/blob/main/Code/AsianOption.h)
Définit la classe `AsianOption`, servant de classe de base pour les options asiatiques, fournissant des attributs et fonctionnalités partagés.

### [AsianPutOption.h](https://github.com/RostaneF/Options-Pricer/blob/main/Code/AsianPutOption.h)
Définit la classe `AsianPutOption`, qui représente une option de vente asiatique et permet le calcul de son prix.

### [BinaryTree.h](https://github.com/RostaneF/Options-Pricer/blob/main/Code/BinaryTree.h)
Définit la classe `BinaryTree`, utilisée pour construire et gérer des arbres binaires.

### [BlackScholesMCPricer.h](https://github.com/RostaneF/Options-Pricer/blob/main/Code/BlackScholesMCPricer.h)
Définit la classe `BlackScholesMCPricer`, utilisée pour tarifer les options en utilisant le modèle Black-Scholes et des simulations de Monte Carlo.

### [BlackScholesPricer.h](https://github.com/RostaneF/Options-Pricer/blob/main/Code/BlackScholesPricer.h)
Définit la classe `BlackScholesPricer`, qui fournit des fonctionnalités pour tarifer les options en utilisant le modèle Black-Scholes.

### [CRRPricer.h](https://github.com/RostaneF/Options-Pricer/blob/main/Code/CRRPricer.h)
Définit la classe `CRRPricer`, utilisée pour tarifer les options en utilisant le modèle binomial de Cox-Ross-Rubinstein.

### [CallOption.h](https://github.com/RostaneF/Options-Pricer/blob/main/Code/CallOption.h)
Définit la classe `CallOption`, qui représente une option d'achat et fournit des fonctionnalités pour calculer son prix.

### [DigitalCallOption.h](https://github.com/RostaneF/Options-Pricer/blob/main/Code/DigitalCallOption.h)
Définit la classe `DigitalCallOption`, représentant une option d'achat digitale et permettant le calcul de son prix.

### [DigitalOption.h](https://github.com/RostaneF/Options-Pricer/blob/main/Code/DigitalOption.h)
Définit la classe `DigitalOption`, servant de classe de base pour les options digitales, fournissant des attributs et fonctionnalités partagés.

### [DigitalPutOption.h](https://github.com/RostaneF/Options-Pricer/blob/main/Code/DigitalPutOption.h)
Définit la classe `DigitalPutOption`, qui représente une option de vente digitale et fournit des fonctionnalités pour calculer son prix.

### [MT.h](https://github.com/RostaneF/Options-Pricer/blob/main/Code/MT.h)
Définit la classe `MT`, utilisée pour générer des nombres aléatoires en utilisant l'algorithme Mersenne Twister.

### [Option.h](https://github.com/RostaneF/Options-Pricer/blob/main/Code/Option.h)
Définit la classe `Option`, qui sert de classe de base pour divers types d'options, fournissant des fonctionnalités et attributs communs.

### [PutOption.h](https://github.com/RostaneF/Options-Pricer/blob/main/Code/PutOption.h)
Définit la classe `PutOption`, qui représente une option de vente et fournit des fonctionnalités pour calculer son prix.

