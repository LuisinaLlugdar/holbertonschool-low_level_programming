#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string
 * Return: char pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b, c;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	b = 0;
	while (haystack[b] != '\0')
	{
		if (haystack[b] == needle[0])
		{
			c = b;
			a = 0;
			while (needle[a] != '\0')
			{
				if (haystack[c] == needle[a])
				{
					c++;
					a++;
				}
				else
				{
					break;
				}
			}
			if (needle[a] == '\0')
			{
				return (haystack + b);
			}
		}
		b++;
	}
	return ('\0');
}
