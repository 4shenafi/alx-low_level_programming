#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
/**
  * main - main function is the entry point of the program
  * Return: returns an integer value
  */
int main(void) 
{
	const char *message = "and that piece of art is useful\" 
	    - Dora Korpar, 2015-10-19\n";
	ssize_t len = strlen(message);
	if (write(STDERR_FILENO, message, len) != len) 
	{
		return (1); 
	}
	return (1); 
}
