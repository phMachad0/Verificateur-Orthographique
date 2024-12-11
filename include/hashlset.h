#include "list.h"
#include "queue.h"
#include "vect.h"

// Definition de la structure
typedef struct {
	/* Nombre d'elements de l'ensemble */
	unsigned int total_number;
	/* Taille du tableau */
	unsigned int size;
	/* La fonction de hachage pour cet ensemble */
	unsigned int (*hachage)(void *);
	/* Le tableau de pointeurs vers maillons */
	list_t * data;
	/* Les fonctions classques */
	void* (*delete_key)(void*);
	int (*compare_key)(void* e1, void* e2);
	void (*print_key)(void*, FILE*);
}*hashlset_t;

/**
 * @brief Creation d'un ensemble vide
 * 
 * @param n taille du tableau
 * @param fhachage fonction de hachage
 * @param print_key fonction d'affichage
 * @param delete_key fonction de suppression
 * @param compare_key fonction de comparaison
 * @return hashlset_t 
 */
hashlset_t hashlset_new(int n, unsigned int (*fhachage)(void*), void (*print_key)(void*,FILE*), void* (*delete_key)(void*), int (*compare_key)(void* e1, void* e2));

/**
 * @brief Suppression de l'ensemble
 * 
 * @param table ensemble à supprimer
 * @return hashlset_t 
 */
hashlset_t hashlset_delete(hashlset_t table);

/**
 * @brief Ajout d'un element dans l'ensemble
 * 
 * @param key element à ajouter
 * @param table ensemble
 * @return int 
 */
int hashlset_put(void* key, hashlset_t table);

/**
 * @brief Recherche d'un element dans l'ensemble
 * 
 * @param key element à rechercher
 * @param table ensemble
 * @return int 
 */
int hashlset_find_key(void* key, hashlset_t table);

/**
 * @brief Suppression d'un element dans l'ensemble
 * 
 * @param key element à supprimer
 * @param table ensemble
 * @return int 
 */
int hashlset_remove_key(void* key, hashlset_t table);

/**
 * @brief Affichage de l'ensemble
 * 
 * @param table ensemble
 */
void hashlset_fprintf(hashlset_t table, FILE*fp);

/**
 * @brief Calcul de la taille mémoire de l'ensemble
 * 
 * @param hash ensemble
 * @return double 
 */
double hashlset_memory_usage(hashlset_t hash);