#include "main.h"
/**
 * _strlen - A function that returns the length of a string
 * @s: string
 * Return: The length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
