#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 if success, -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int i = 0;

	if (!filename)
	{
		return (-1);
	}
	while (text_content && text_content[i] != '\0')
	{
		i++;
	}
	i++;

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		write(file, text_content, i - 1);
	}
	else
		return (1);
	close(file);
	return (1);
}
