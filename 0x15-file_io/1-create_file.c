#include "main.h"

/**
 * create_file - read text file
 * @filename: char
 * @text_content: size_t
 * Return: ssize_t
*/

int create_file(const char *filename, char *text_content)
{
	int open_file;
	int write_file;

	open_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (filename == NULL)
	{
		close(open_file);
		return (-1);
	}
	write_file = write(open_file, text_content, strlen(text_content));
	if (open_file == -1 && write_file == -1)
	{
		close(open_file);
		return (-1);
	}
	close(open_file);
	return (1);
}
