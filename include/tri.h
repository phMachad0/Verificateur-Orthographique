#include "vect.h"

/**
 * @brief Partitionne le tableau `tab` entre les indices `gauche` et `droit`
 * 
 * @param tab le tableau à partitionner
 * @param gauche l'indice de début de la partition
 * @param droit l'indice de fin de la partition
 * @return int l'indice du pivot
 */
int partitionner(vect_t tab, int gauche, int droit);

/**
 * @brief Tri rapide récursif du tableau `tab` entre les indices `gauche` et `droit`
 * 
 * @param tab le tableau à trier
 * @param gauche l'indice de début de la partition
 * @param droit l'indice de fin de la partition
 */
void quick_sortrec(vect_t tab, int gauche, int droit);

/**
 * @brief Tri rapide du tableau `tab`
 * 
 * @param tab le tableau à trier
 */
void quicksort(vect_t tab);

/**
 * @brief Fusionne les deux parties triées du tableau `tab` entre les indices `gauche` et `droit`
 * 
 * @param tab le tableau à fusionner
 * @param tmp le tableau temporaire
 * @param gauche l'indice de début de la partition
 * @param droit l'indice de fin de la partition
 */
void fusion(vect_t tab, vect_t tmp, size_t gauche, size_t droit);

/**
 * @brief Tri fusion récursif du tableau `tab` entre les indices `gauche` et `droit`
 * 
 * @param tab le tableau à trier
 * @param tmp le tableau temporaire
 * @param gauche l'indice de début de la partition
 * @param droit l'indice de fin de la partition
 */
void _trifusionrec(vect_t tab, vect_t tmp, size_t gauche, size_t droit);

/**
 * @brief Tri fusion du tableau `tab`
 * 
 * @param tab le tableau à trier
 */
void mergesort(vect_t tab);

/**
 * @brief Recherche dichotomique de l'élément `element` dans le tableau `tab`
 * 
 * @param tab le tableau dans lequel chercher
 * @param element l'élément à chercher
 * @return int l'indice de l'élément ou -1 s'il n'est pas trouvé
 */
void heapsort(vect_t tab);

/**
 * @brief Recherche dichotomique de l'élément `element` dans le tableau `tab`
 * 
 * @param tab le tableau dans lequel chercher
 * @param element l'élément à chercher
 * @return int l'indice de l'élément ou -1 s'il n'est pas trouvé
 */
int binary_search(vect_t tab, void* element);