#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file
 * @filename: the name of the file.
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, n, w;
	
	if (filename == NULL)
		return (-1);

	if (!text_content)
		;
	else if (text_content != NULL){
		(n = 0; text_content[n]; n++);
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, n);
		if (o == -1 || w == -1)
			return (-1);
	
		
	close(o);

	return (1);
}
