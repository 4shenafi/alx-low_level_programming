#include "main.h"
#include <stdio.h>
/**
  *
  */
void print_times_table(int n)
{
    int row, col, prod;

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

