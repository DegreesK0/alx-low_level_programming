#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* #include <stddef.h> */
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reads a textfile and writes the output to POSIX (terminal)
 * @filename: name of the file being read
 * @letters: length of the file being read
 *
 * Return: 0 if there is an error, the number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp; /* File descriptor, not file pointer */
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(fp, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fp);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, letters);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fp);
		return (bytes_read);
	}

	free(buffer);
	close(fp);

	return (bytes_written);
}
