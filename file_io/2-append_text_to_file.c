#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the content of the file
 *
 * Return: 1 on success
 * -1 on failure, or if filename or text_centent is NULL
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (text_content == NULL)
		return (1);

	if (write(fp, text_content, strlen(text_content)) == -1)
		return (-1);
	close(fp);

	return (1);
}

