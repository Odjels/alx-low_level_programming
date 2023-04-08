#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file
 * @filename: the name of the file.
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o;
	int n;
	int w;

	if (!filename)
		return (-1);

	o = open(filename, O_WRONLY | O_APPEND);

	if (o == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;

		w = write(o, text_content, n);
		if (w == -1)
			return (-1);
	}

	close(o);

	return (1);
}
