#include <stdio.h>

/**
  * main - prints Fibonacci sequence
  * Return: always return 0
  */
int main(void)
{
    unsigned long int i = 1;
    unsigned long int j = 2;
    unsigned long int n = 0; // Initialize n to avoid undefined behavior

    printf("%lu, %lu, ", i, j);

    while (n <= 4000000)
    {
        n = i + j;
        if (n <= 4000000)
            printf("%lu", n);
        if (n < 3524578)
            printf(", ");
        i = j;
        j = n;
    }
    printf("\n");

    return 0;
}
