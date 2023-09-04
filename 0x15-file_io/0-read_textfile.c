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
	/* FILE *fp; */
	/* char ch[10000]; */
	/* fp = fopen(filename, "r"); */
	/* printf("%s", fgets(ch, letters, fp)); */

	/* fclose(fp); */
	/* return (letters); */

	int fp;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters + 1);
	if (buffer == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	/* if (fp == NULL) */
	/*	return (0); */

	read(fp, buffer, letters);
	write(STDOUT_FILENO, buffer, letters);
	free(buffer);
	close(fp);

	return (letters);
}
