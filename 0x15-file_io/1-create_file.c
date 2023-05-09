#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file.
 * @filename: name of the file to create
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	size_t len = 0;
	ssize_t w;
	int fd;


	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		len = strlen(text_content);
		w = write(fd, text_content, len);
		close(fd);
		if (w == -1 || (size_t)w != len)
			return (-1);
	}
	else
		close(fd);
	return (1);

}
