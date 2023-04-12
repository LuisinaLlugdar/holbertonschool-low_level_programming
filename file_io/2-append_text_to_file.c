#include "main.h"
/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: name of the file to create if it doesn't exist
 * @text_content: string to write to filename
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, chars_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	chars_write = write(fd, text_content, strlen(text_content));
	if (chars_write == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
