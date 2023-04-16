#include "main.h"
/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of the file
 * @letters: amount of letters
 * Return: amount of letters printed, or 0 if file can't
 * be opened or read, or if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file, a, b;

	if (!filename)
	{
		return (0);
	}
	buffer = malloc(letters);
	if (!buffer)
	{
		return (-1);
	}
	file = open(filename, O_RDWR);
	if (file == -1)
	{
		return (0);
	}
	a = read(file, buffer, letters);
	if (a == -1)
	{
		return (0);
	}
	b = write(STDOUT_FILENO, buffer, a);
	if (b == -1)
	{
		return (0);
	}
	close(file);
	free(buffer);
	return (b);
}
