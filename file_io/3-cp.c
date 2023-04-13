#include "main.h"
/**
 * exit_code - exits with corresponding value and message
 * @error: error value
 * @arg: argument (file_from or file_to) with error
 * @fd: file descriptor with error
 * Return: error number
 */
int exit_code(int error, char *arg, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg);
			exit(error);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg);
			exit(error);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error);
			break;
		default:
			return (0);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: only three arguments are acceptable: executable file_from file_to
 * @argv: each one of the three mentioned above
 * Return: 0 if success, error value if error
 */
int main(int argc, char **argv)
{
	int file_from, file_to, chars_read, chars_write;
	char *buffer[1024];

	if (argc != 3)
		exit_code(97, NULL, 0);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		exit_code(98, argv[1], 0);

	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 00664);
	if (file_to == -1)
		exit_code(99, argv[2], 0);

	while ((chars_read = read(file_from, buffer, 1024)) != 0)
	{
		if (chars_read == -1)
			exit_code(98, argv[1], 0);

		chars_write = write(file_to, buffer, chars_read);
		if (chars_write == -1)
			exit_code(99, argv[2], 0);
	}
	if (close(file_from) == -1)
		exit_code(100, NULL, file_from);
	else
		close(file_from);

	if (close(file_to) == -1)
		exit_code(100, NULL, file_to);
	else
		close(file_to);

	return (0);
}
