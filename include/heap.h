#ifndef _HEAP
#define _HEAP
// Ne pas oublier d'inclure les vecteurs génériques
#include "vect.h"
// Le tas est un simple tableau avec des fonctionnalités supplémentaires ci dessous
typedef vect_t heap_t;

/** 
 * @brief Creation d'un tas vide
 * 
 * @param n taille du tableau
 * @param print_data fonction d'affichage
 * @param delete_data fonction de suppression
 * @param equal_data fonction de comparaison
 * @return heap_t 
 */
heap_t heap_new(unsigned int n,void (*print_data)(void*,FILE*),
                void* (*delete_data)(void*),int (*equal_data)(void*,void*));

/** 
 * @brief Teste si le tas est vide
 * 
 * @param tas tas à tester
 * @return int 
 */
int heap_is_empty(heap_t tas);

/** 
 * @brief Ajout d'un element dans le tas
 * 
 * @param valeur element à ajouter
 * @param tas tas
 * @return int 
 */
int heap_add(void* valeur, heap_t tas);

/** 
 * @brief Recuperation de l'element le plus petit
 * 
 * @param tas tas
 * @return void* 
 */
void* heap_get_extrema(heap_t tas);


/** 
 * @brief Suppression de l'element le plus petit
 * 
 * @param tas tas
 * @return int 
 */
int heap_delete_extrema(heap_t tas);


/** 
 * @brief Verification de la structure du tas
 * 
 * @param tas tas
 * @return int 
 */
int heap_verification(heap_t tas);

/** 
 * @brief Suppression du tas
 * 
 * @param tas tas
 * @return heap_t 
 */
heap_t heap_delete(heap_t tas);

/** 
 * @brief Affichage du tas
 * 
 * @param tas tas
 */
void heap_printf(heap_t tas);
void heap_fprintf(heap_t tas,FILE* fp);


#define HEAP_FATHER(i) ( ((i)-1)/2)
#define HEAP_LEFTSON(i) ( 2*(i)+1)
#define HEAP_RIGHTSON(i) ( 2*((i)+1))

#endif