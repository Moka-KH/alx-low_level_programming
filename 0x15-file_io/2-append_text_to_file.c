#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content:  string to add at the end of the file
 *
 * Return:  1 on success and -1 on failure (file doesn't exist or NULL)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int to_be_printed;
	int append;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (to_be_printed = 0; text_content[to_be_printed]; to_be_printed++);

		append = write(fd, text_content, to_be_printed);

		if (append == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
