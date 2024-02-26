#include "main.h"
/**
  * _islower - a function checks lowercase or not
  * @c:  is a parameter passed
  * Return: always return either 1 or 2
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
