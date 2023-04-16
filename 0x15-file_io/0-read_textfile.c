#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads the file and prints it to the POSIX stdout.
 * @filename: The name of the file.
 * @letters: The numbers of letters to  read and print.
 *
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i, j, k;
	char *cup;

	if (!filename)
		return (0);

	cup = malloc(sizeof(char) * letters);
	if (cup == NULL)
		return (0);

	i = open(filename, O_RDONLY);

	if (i == -1){
		free(cup);
		return (0);
	}

	j = read(i, buffer, letters);
	if (j == -1){
		free(cup);
		return (0);}

	k = write(STDOUT_FILENO, buffer, j);
	if (k == -1 && k != j)
	{
		free(cup);
		return (0);
	}

	free(cup);
	close(i);

	return (k);
}
