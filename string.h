#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

#include <stddef.h>

///LIBRERIA DE ALGUNAS FUNCIONES DE STRING.H

void *memchr(const void *cadena, int c, size_t num);
int memcmp(const void *cadena1, const void *cadena2, size_t num);
void *memcpy(void *cadena1, const void *cadena2, size_t num);
char *strcat(char*cadena1, const char *cadena2);
char *strchr(const char *cadena, int c);
int strcmp(const char *cadena1, const char *cadena2);
char *strcpy(char *cadena1, const char *cadena2);
size_t strcspn(const char *cadena1, const char *cadena2);
size_t strlen(const char *cadena);
char *strncat(char*cadena1, const char *cadena2, size_t num);
int strncmp(const char *cadena1, const char *cadena2, size_t num);
char *strncpy(char *cadena1, const char *cadena2, size_t num);
char *strrchr(char *cadena, int c);


#endif // STRING_H_INCLUDED
