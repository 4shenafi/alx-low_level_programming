#include "main.h"
#include <stdio.h>
/**
  * print_times_table - a function prints time table
  * @n: passed max table num
  */
void print_times_table(int n)
{
	int row;
	int col;
	int prod;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				prod = col * row;
				if (col == 0)
				{
					printf("%d", prod);
				}
				else if (prod < 10 && col != 0)
				{
					printf(",   %d", prod);
				}
				else if (prod >= 10 && prod < 100)
				{
					printf(",  %d", prod);
				}
				else if (prod >= 100)
				{
					printf(", %d", prod);
				}
			}
			printf("\n");
		}
	}
}
