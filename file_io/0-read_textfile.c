#include "main.h"

/**
* read_textfile - reading a text file.
* @filename: the file being read.
* @letters: how many letters are in the file.
*
* Return: read file.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int size;
	int fd;
	char *s;

	s = malloc(sizeof(char) * letters);
	if (s == NULL)
	{
		return (0);
	}

	if (filename == NULL || *filename == '\0')
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(s);
		return (0);
	}

	size = read(fd, s, letters);
	if (size > 0)
	{
		write(STDOUT_FILENO, s, size);
	}

	close(fd);
	free(s);

	return (size);
}
