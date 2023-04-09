#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *b;
	ssize_t read_bytes, write_bytes;

	b = malloc(sizeof(char) * letters);
	if (b == NULL || filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		free(b);
		return (0);
	}

	read_bytes = read(f, b, letters);
	if (read_bytes == -1)
	{
		free(b);
		close(f);
		return (0);
	}

	write_bytes = write(STDOUT_FILENO, b, read_bytes);
	if (write_bytes == -1)
	{
		free(b);
		close(f);
		return (0);
	}

	free(b);
	close(f);
	return (write_bytes);
}
