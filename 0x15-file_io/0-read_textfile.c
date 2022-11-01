#include "main.h"

/**
 * read_textfile - returns the actual number of letters it
 * could read and print
 *
 * @filename: file to read and print
 *
 * @letters: number of letters to print
 *
 * Return: the number or letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, size;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(letters * sizeof(char));

	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	size = write(STDOUT_FILENO, buf, read(fd, buf, letters));

	if (size == -1)
		return (0);

	close(fd);
	free(buf);

	return (size);
}
