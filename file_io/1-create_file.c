#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 if success, -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int i = 0;

	if (!filename)
		return (-1);

	while (text_content && text_content[i] != '\0')
	{
		i++;
	}
	i++;

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600); /* rw------- */
	if (file == -1)
	{
		return (-1);
	}
	write(file, text_content, i - 1);
	close(file);
	return (1);
}
