#include <stdio.h>
/**
  * main - prints the sum of multiples of 3 and 5
  * Return: returns 0
  */
int main(void)
{
	int i;
	int m3 = 0;
	int m5 = 0;
	int t;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			m3 = m3 + i;
		}
		else if (i % 5 == 0)
		{
			m5 = m5 + i;
		}
	}
	t = m3 + m5;
	printf("%d\n", t);
	return (0);
}



