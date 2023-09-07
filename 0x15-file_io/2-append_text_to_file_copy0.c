#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

/**
 *
 */

/* int append_text_to_file(const char *filename, char *text_content) */
/* { */
/* 	int fd, written, len = 0; */

/* 	if (text_content != NULL) */
/* 	{ */
/* 		while (text_content) */
/* 			len++; */
/* 	} */

/* 	fd = open(filename, O_WRONLY | O_APPEND); */
/* 	written = write(fd, text_content, len); */
/* 	if (fd == -1 || written == -1) */
/* 		return (-1); */
/* 	close(fd); */


/* 	return (1); */
/* } */




