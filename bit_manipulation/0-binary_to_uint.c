#include "main.h"
/**
 * binary_to_uint - converts a binaty number to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: converted number, or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int x = 0, length = 0;

	if (b == NULL)
		return (0);

	/*obtengo el largo de b, que le hare el left shift para obtener la...*/
	/*cantidad de 0 necesaria para tener la potencia de 2 que corresponde*/
	while (b[length] != '\0')
		length++;
	/*para 2^0 no necesito correr ningun lugar, corro en todos los casos*/
	/*menos en uno*/
	length = length - 1;

	/*recorro b en busca de '1', que se multiplicara por alguna pot de 2*/
	while (b[x] != '\0')
	{
		if ((b[x] != '0') && (b[x] != '1'))
			return (0);

		/*cuando encuentra un 1, lo multiplica por el 1 en binario...*/
		if (b[x] == '1')
		/*movido len lugares, que sucesiv. me va dando las pot de 2*/
			sum = sum + (1 * (1 << length));
		x++;
		length--;
	}
	return (sum);
}
