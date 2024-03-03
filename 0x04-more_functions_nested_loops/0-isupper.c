#include "main.h"
/**
  * _isupper - checks if uppercase or not
  * @c: passed paremeter
  * Returns: either 1 or 0
  */
int _isupper(int c)
{
	if (c >= 'A' || c <= 'z')
		return (1);
	else
		return (0);
}
