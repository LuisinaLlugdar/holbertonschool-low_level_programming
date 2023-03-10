#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - code
 * @argc: variable
 * @argv: variable
 * Return: int
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);
	return (0);
}
