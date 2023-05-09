#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <errno.h>
#include <fcntl.h>

/**
 * read_textfile - read text file to print
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	if (t == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, t);
	if (w == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (w);
}
