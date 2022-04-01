#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers, followed by a new line
 * @argc: argument that counts argument input
 * @argv: argument that stores the strings in an array of char* (strings)
 * Return: 0
 */
int main(int argc, char *argv[])
{
int a, b, result;

if (argc <= 2)
{
printf("Error\n");
return (1);
}
/* atoi convert a string to an int */
a = atoi(argv[1]);
b = atoi(argv[2]);
result = a *b;
printf("%d\n", result);
return (0);
}
