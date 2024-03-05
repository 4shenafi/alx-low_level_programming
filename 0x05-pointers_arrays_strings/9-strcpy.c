#include "main.h"
/**
  * _strcpy - copies a string
  * @dest: passed parameter
  * @src: second parameter
  * Return: retuns copied value
  */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
