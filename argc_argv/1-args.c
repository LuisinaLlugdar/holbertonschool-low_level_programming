#include "main.h"
/**
 * main - code
 * @argc: variable
 * @argv: variable
 * Return: int
 */
int main(int argc, char *argv[])
{
	(void)argv;

	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
