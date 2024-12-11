#include <stdio.h>
#include <stdlib.h>

typedef
        struct _node {
	struct _node *sons[26];
        int is_terminal;
} *tree_t;

/** 
 * Création d'un arbre vide
 * @return l'arbre vide
 */
tree_t trie_new();

/** 
 * Insertion d'un mot dans l'arbre
 * @param word le mot à insérer
 * @param t l'arbre dans lequel insérer le mot
 * @return l'arbre avec le mot inséré
 */

tree_t trie_insert(char *word, tree_t t);

/** 
 * Recherche d'un mot dans l'arbre
 * @param word le mot à rechercher
 * @param t l'arbre dans lequel rechercher le mot
 * @return 1 si le mot est trouvé, 0 sinon
 */
int trie_lookup(char *word, tree_t t);

/** 
 * Suppression de l'arbre
 * @param t l'arbre à supprimer
 * @return l'arbre vide
 */
tree_t trie_delete(tree_t t);

/** 
 * Calcul de la taille mémoire de l'arbre
 * @param tree l'arbre
 * @return la taille mémoire de l'arbre
 */
double trie_memory_usage(tree_t tree);