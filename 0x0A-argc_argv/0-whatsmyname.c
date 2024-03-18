#include <stdio.h>
#include "main.h"
/**
 * main - a function prints name of file
 * Return: always return
 */
int main(int argc, char* argv[])
{
    (void) argc;
    printf("%s", *argv);
    return (0);
}
