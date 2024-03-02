#include "main.h"
#include <stdio.h>
/**
  *
  */
void print_times_table(int n)
{
	int col;
	int row;
	int prod;

	if (n <= 15)
	{
		for (col = 0; col <= n; col++)
		{
			for (row = 0; row <= n; row++)
			{
				prod = col * row;
				if (row == 0)
				{
					printf("0,");
				}
				else if (row > 0 && row < n)
				{
					printf("%4d,", prod);
				}
				else
				{
					printf("%4d", prod);
				}
			}
			printf("\n");
		}
		printf("\n");
	}
}

