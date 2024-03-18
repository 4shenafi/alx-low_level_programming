#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * main - Prints the sum of args positive numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int i;
	size_t j;
	int sum = 0;
	char *m;
	int num;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			m = argv[i];
			for (j = 0; j < strlen(argv[i]); j++)
			{
				if (m[j] < '0' || m[j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			num = atoi(argv[i]);
			sum += num;
		}
		printf("%d\n", sum);
	}
	return (0);
}
