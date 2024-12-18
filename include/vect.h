#ifndef _VECT_H
#define _VECT_H
#include <stdio.h>
#include<assert.h>
#include <stdlib.h>
#include <string.h>

// Definition des structures des vects par la macro makevoidvect
// Le nom de la structure est vect_void_t
// Elle comporte les champs
//    - data : un tableau de pointeurs sur les données, alloué dynamiquement,
//    - max_size : la taille max du tableau
//    - actual_size : la taille actuelle du tableau
typedef struct _vect_t {
    void* * data;
    unsigned int max_size;
    unsigned int actual_size;

    void (*fprint_data)(void*,FILE*);
    void* (*delete_data)(void*);
    int (*equal_data)(void*,void*);
}  *  vect_t;

// Creation d'un vecteur de n elements
vect_t vect_new(unsigned int n,void (*print_data)(void*,FILE*), void* (*delete_data)(void*),int (*equal_data)(void*,void*));

// Ajout d'un element avec redimensionnement si nécessaire
vect_t vect_append(void* e, vect_t table);

// Suppression d'un element à l'indice i
void vect_printf(vect_t table);

// Affichage du vecteur
void vect_fprintf(vect_t table,FILE* fp);

// Suppression du vecteur
vect_t vect_delete(vect_t table);

// Recherche d'un element dans le vecteur
int vect_find(void* param, vect_t l);

// Recherche d'un element dans le vecteur
int vect_lookup(void* param, vect_t l, int (*)(void*,void*));

// Suppression d'un element à l'indice i
vect_t vect_remove_at(int i, vect_t table);

// Recherche dichotomique d'un element dans le vecteur
double vect_memory_usage(vect_t table);
#endif