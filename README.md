# Vérificateur Orthographique en C

# KERKOFF LADEIRA Julia
# MACHADO ALMEIDA Pedro Henrique
# STELTER FENZKE Caio

## Description

Ce projet est un vérificateur orthographique implémenté en C. Il compare un texte donné avec un dictionnaire pour identifier les mots qui ne figurent pas dans ce dernier. Le programme exploite différentes structures de données pour effectuer cette tâche, en mettant l'accent sur la performance et l'efficacité mémoire.

## Fonctionnalités

- Chargement d'un dictionnaire et analyse d'un texte.
- Identification des mots incorrects (absents du dictionnaire).
- Utilisation de plusieurs structures de données pour la gestion du dictionnaire :
  - Recherche linéaire dans un vecteur dynamique.
  - Recherche binaire avec tri préalable.
  - Structures avancées comme HashSet, Trie, et Arbre Patricia.
- Comparaison des performances des structures de données en termes de rapidité, mémoire utilisée et complexité.

## Pré-requis

Pour compiler et exécuter ce projet, vous aurez besoin de :
- Un compilateur C (comme `gcc`).
- L'outil Valgrind pour vérifier les fuites de mémoire (optionnel).
- Un terminal pour exécuter les commandes.

## Installation et Compilation

Le projet comprend cinq tests principaux, chacun utilisant une structure de données différente pour la gestion du dictionnaire et la recherche dans un texte. Assurez-vous que toutes les commandes sont exécutées depuis le dossier `projet`.

### Compilation

Pour compiler les tests, utilisez les commandes suivantes :

```bash
# Compiler les tests individuellement
make vect          # Compile le test pour le vecteur dynamique
make binarySearch  # Compile le test pour la recherche binaire
make hashlset      # Compile le test pour le HashSet
make trie          # Compile le test pour le Trie
make patricia      # Compile le test pour l'Arbre Patricia
make clean

### Exécution

#  Une fois les tests compilés, vous pouvez les exécuter directement avec les commandes suivantes :


make run-dico-vect          # Exécute le test pour le vecteur dynamique
make run-dico-binarySearch  # Exécute le test pour la recherche binaire
make run-dico-hashlset      # Exécute le test pour le HashSet
make run-dico-trie          # Exécute le test pour le Trie
make run-dico-patricia      # Exécute le test pour l'Arbre Patricia

# Pour garantir l'absence de fuites de mémoire et de mauvais accès à la mémoire, vous pouvez exécuter les tests précédents avec Valgrind en remplaçant run-dico-* par les commandes suivantes :

valgrind --leak-check=full ./output/testDicoVect test/dico1.txt test/a_la_recherche_du_temps_perdu.txt
valgrind --leak-check=full ./output/testDicoBinarySearch test/dico1.txt test/a_la_recherche_du_temps_perdu.txt
valgrind --leak-check=full ./output/testDicoHashlset test/dico1.txt test/a_la_recherche_du_temps_perdu.txt
valgrind --leak-check=full ./output/testDicoTrie test/dico1.txt test/a_la_recherche_du_temps_perdu.txt
valgrind --leak-check=full ./output/testDicoPatricia test/dico1.txt test/a_la_recherche_du_temps_perdu.txt


