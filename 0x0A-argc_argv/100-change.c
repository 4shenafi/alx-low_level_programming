#include <stdio.h>
#include <stdlib.h>

/**
 * main - gives max num of cents
 * @argc: counts
 * @argv: index
 * Return: returns
 */
int main(int argc, char *argv[])
{

	int coins[] = {25, 10, 5, 2, 1};
	int m, cent = 0, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	m = atoi(argv[1]);

	for (i = 0; i < 5 && m; i++)
	{
		cent += m / coins[i];
		m %= coins[i];
	}
	printf("%d\n", cent);
	return (0);
}
