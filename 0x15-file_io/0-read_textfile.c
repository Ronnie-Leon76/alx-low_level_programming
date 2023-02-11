#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to be opened
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	r = read(fd, buf, letters);
	if (r == -1)
		return (0);
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1 || w != r)
		return (0);
	free(buf);
	close(fd);
	return (w);
}
