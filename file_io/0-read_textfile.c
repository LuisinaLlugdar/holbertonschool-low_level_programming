#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file where to read from
 * @letters: number of letters to read and print
 * Return: number of letters read and printed, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t chars_read, chars_write;

	if (filename == NULL)
		return (0);

	/*open filename in READONLY mode*/
	fd = open(filename, O_RDONLY);
	/*if error in opening*/
	if (fd == -1)
		return (0);

	/*ask for memory to store filename content*/
	buf = malloc(sizeof(char) * letters);
	/*check if malloc failed*/
	if (buf == NULL)
		return (0);

	/*read letters amount of chars from buf*/
	chars_read = read(fd, buf, letters);
	/*if failed, undo memory allocation and close the opened fd*/
	if (chars_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	/*write the same amount of chars read from buf*/
	chars_write = write(STDOUT_FILENO, buf, chars_read);
	if (chars_write == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	return (chars_read);
}
