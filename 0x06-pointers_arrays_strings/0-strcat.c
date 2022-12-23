#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Find the end of the dest string
 *
 * Append src to end of dest
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;
		while (*dest_end != '\0')
		{
			dest_end++;
		}

		while (*src != '\0')
		{
			*dest_end = *src;
			dest_end++;
			src++;
		}
		*dest_end = '\0';
		return (dest);
}
