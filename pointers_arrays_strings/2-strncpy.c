#include "main.h"

/**
 * _strncpy - replaces the elements of string
 * @src: first string
 * @dest: second string and the output of the concatination
 * @n: end of copy
 *
 * Return: output string
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
