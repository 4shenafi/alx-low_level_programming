#include "main.h"
/**
  * _isalpha - checks whether parameter is alphabet or not
  * @c: is passed parameter
  * Return: returns either 1 or 0
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
