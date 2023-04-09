#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f, l, write_bytes;

	/* check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* open file with O_CREAT, O_WRONLY, O_TRUNC */
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);

	/* if text_content is NULL, write nothing to the file */
	if (text_content == NULL)
	{
		close(f);
		return (1);
	}

	/* calculate length of text_content */
	for (l = 0; text_content[len]; l++)
		;

	/* write text_content to the file */
	write_bytes = write(f, text_content, l);
	if (write_bytes == -1)
	{
		close(f);
		return (-1);
	}

	/* close file and return 1 on success */
	close(f);
	return (1);
}
