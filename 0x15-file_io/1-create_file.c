#include "main.h"
/**
 * create_file -creates array of chars, and initializes them.
 *
 * @text_content: NULL terminated string to write to the file
 * @filename: name of the file to create
 *
 * Return: 1 for success, -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int i, j, lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(i, text_content, lenght);

	if (i == -1 || j == -1)
		return (-1);

	close(i);

	return (1);
}
