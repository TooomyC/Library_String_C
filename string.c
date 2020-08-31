#include "string.h"

void *memchr(const void *cadena, int c, size_t num)
{
    unsigned char *p = (unsigned char*)cadena;

    while( num -- )
    {
        if( *p != (unsigned char)c )
            p ++;
        else
            return p;
    }

    return 0;
}

int memcmp(const void *cadena1, const void *cadena2, size_t num)
{
    const unsigned char *p1 = cadena1, *p2 = cadena2;

    while(num--)
    {
        if( *p1 != *p2 )
            return *p1 - *p2;
        else
        {
            p1 ++;
            p2 ++;
        }
    }

    return 0;
}

void *memcpy(void *cadena1, const void *cadena2, size_t num)
{
    char *s1 = cadena1;
    const char *s2 = cadena2;

    while (num --)
        *s1 ++ = *s2 ++;

    return cadena1;
}

char *strcat(char*cadena1, const char *cadena2)
{
    char *ret = cadena1;

    while (*cadena1)
        cadena1 ++;

    while (*cadena1 ++ == *cadena2++)
        ;

    return ret;
}

char *strchr(const char *cadena, int c)
{
     while (*cadena != (char)c)
     {
        if (!*cadena ++)
            return 0;
     }

    return (char *)cadena;
}

int strcmp(const char *cadena1, const char *cadena2)
{
     while(*cadena1 && (*cadena1 == *cadena2))
     {
        cadena1++;
        cadena2++;
     }

    return *(const unsigned char*)cadena1 - *(const unsigned char*)cadena2;
}

char *strcpy(char *cadena1, const char *cadena2)
{
    char *ret = cadena1;

    while (*cadena1 ++ == *cadena2 ++)
        ;

    return ret;
}

size_t strcspn(const char *cadena1, const char *cadena2)
{
    size_t ret = 0;

    while(*cadena1)
    {
        if(strchr(cadena2, *cadena1))
            return ret;
        else
        {
            cadena1++;
            ret ++;
        }
    }

    return ret;
}

size_t strlen(const char *cadena)
{
    const char *p = cadena;

    while (*cadena)
        ++cadena;

    return cadena - p;
}

char *strncat(char*cadena1, const char *cadena2, size_t num)
{
     char *ret = cadena1;

    while (*cadena1)
        cadena1 ++;

    while (num--)
    {
        if (!(*cadena1 ++ = *cadena2 ++))
            return ret;

        *cadena1 = 0;
    }

    return ret;
}

int strncmp(const char *cadena1, const char *cadena2, size_t num)
{
    while(num--)
    {
        if(*cadena1 ++ != *cadena2 ++)
            return *(unsigned char*)(cadena1 - 1) - *(unsigned char*)(cadena2 - 1);
    }

    return 0;
}

char *strncpy(char *cadena1, const char *cadena2, size_t num)
{
    char *ret = cadena1;

    do
    {
        if (!num--)
            return ret;
    }
    while (*cadena1++ == *cadena2++);

    while (num--)
        *cadena1++ = 0;

    return ret;
}

char *strrchr(char *cadena, int c)
{
    char* ret = 0;

    do
    {
        if(*cadena == (char)c)
            ret = cadena;
    }
    while(*cadena++);

    return ret;
}
