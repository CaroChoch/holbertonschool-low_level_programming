#include "main.h"

/**
 * read_textfile - reads a text file
 * and prints it to the POSIX standard
 * output.
 *
 * @filename: pointer to the file to print
 * @letters: number of letters it should read and print
 *
 * Return: 0 if the file can't be opened or read,
 * 0 if filename is NULL or if write is fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *buffer;
	ssize_t size;

	fp = open(filename, O_RDONLY);

	if (filename == NULL)
		return (0);

	if (fp == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	size = read (fp, buffer, letters);
	if (size == -1)
		return (0);

	size = write (STDOUT_FILENO, buffer, size);

	if (size == -1)
		return (0);
	close (fp);
	free(buffer);
	return (size);
}

