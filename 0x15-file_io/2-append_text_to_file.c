#include "main.h"

/**
 * append_text_to_file - append text to EOF
 * @filename: char
 * @text_content: size_t
 * Return: ssize_t
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int open_file;
	int write_file;

	open_file = open(filename, O_WRONLY | O_APPEND);
	if (filename == NULL)
	{
		close(open_file);
		return (-1);
	}
	if (text_content != NULL)
	{
		write_file = write(open_file, text_content, strlen(text_content));
	}
	if (open_file == -1 && write_file == -1)
	{
		close(open_file);
		return (-1);
	}
	close(open_file);
	return (1);
}
