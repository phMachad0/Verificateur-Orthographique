#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <wchar.h>
#include <locale.h>
#include "mystring.h"

/**
 * @file utils.h
 * @brief Utilitaires pour la manipulation de chaines de caractères
 */
int lecture(FILE* fp, char* mot);

/**
 * @brief Supprime les accents d'un caractère
 * 
 * @param c le caractère à traiter
 * @return le caractère sans accent
 */
char remove_accent(wchar_t c);