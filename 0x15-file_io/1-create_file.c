#include "main.h"

/**
 * create_file - create a file
 * @filename: file name 
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int to_be_printed;
	int read_write;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (to_be_printed = 0; text_content[to_be_printed]; to_be_printed++);


	read_write = write(fd, text_content, to_be_printed);

	if (read_write == -1)
		return (-1);

	close(fd);

	return (1);
}
