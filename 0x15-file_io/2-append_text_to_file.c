#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, l, write_bytes;

	/* check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* open file with O_APPEND */
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);

	/* if text_content is NULL, write nothing to the file */
	if (text_content == NULL)
	{
		close(f);
		return (1);
	}

	/* calculate length of text_content */
	for (l = 0; text_content[l]; l++)
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
