#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>


/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: text to be written to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	/* char *buffer; */
	int bytes_written;
	int len;

	if (filename == NULL)
		return (-1);

	len = 0;
	if (text_content != NULL)
	{
		while (text_content[len])
		len++;
	}
	/* buffer = malloc(sizeof(text_content)); */

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes_written = write(fd, text_content, len);
	if (fd == -1 || bytes_written == -1)
	{
		/* close(fd); */
		return (-1);
	}
	close(fd);

	return (1);
}
