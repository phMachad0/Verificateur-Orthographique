typedef
        struct node_radix {
	char* value;
	struct node_radix *sons, * brothers;
}  *patricia_tree_t;

/**
 * @brief Creation d'un arbre vide
 * 
 * @param word mot à ajouter
 * @return patricia_tree_t 
 */
patricia_tree_t patricia_new(char *word);


/**
 * @brief Ajout d'un mot dans l'arbre
 * 
 * @param word mot à ajouter
 * @param tree arbre
 * @return patricia_tree_t 
 */
patricia_tree_t patricia_insert(char *word, patricia_tree_t tree);

/**
 * @brief Recherche d'un mot dans l'arbre
 * 
 * @param word mot à rechercher
 * @param tree arbre
 * @return int 
 */
int patricia_lookup(char *word, patricia_tree_t tree);

/**
 * @brief Suppression de l'arbre
 * 
 * @param tree arbre
 */
void patricia_delete(patricia_tree_t tree);

/**
 * @brief Calcul de la taille de l'arbre
 * 
 * @param tree arbre
 * @return double 
 */
double patricia_memory_usage(patricia_tree_t tree);
