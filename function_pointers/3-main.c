#include "3-calc.h"
/**
 * main - program that performs simple operations
 * @argc: number of arguments
 * @argv: each argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n1, n2;
	int (*check_op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	check_op = get_op_func(argv[2]);
	if (check_op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	printf("%d\n", check_op(n1, n2));

	return (0);
}
