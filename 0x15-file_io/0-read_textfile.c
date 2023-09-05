#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename
 * @letters: number of letters it should read and print
 * Return: numbers of letters printed or on fail or NULL -> return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_text;
	ssize_t _read, _write;
	char *buffer;

	if (!filename)
		return (0);
	file_text = open(filename, O_RDONLY);

	if (file_text == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	_read = read(file_text, buffer, letters);
	_write = write(STDOUT_FILENO, buffer, _read);

	close(file_text);

	free(buffer);

	return (_write);
}
