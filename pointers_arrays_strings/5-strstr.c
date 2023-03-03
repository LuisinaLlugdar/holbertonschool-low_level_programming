#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string
 * Return: char pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	a = 0;
	while (needle[a])
	{
		b = 0;
		while (haystack[b])
		{
			if (*needle == haystack[b])
			{
				haystack = haystack + b;
				return (haystack);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
