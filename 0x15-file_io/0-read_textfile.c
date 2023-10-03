#include "main.h"

/**
 * read_textfile - read text file
 * @filename: char
 * @letters: size_t
 * Return: ssize_t
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int open_file;
	int read_file;
	int write_file;
	char *buff;

	open_file = open(filename, O_RDONLY);
	buff = malloc(letters);
	if (buff == NULL || filename == NULL)
	{
		close(open_file);
		return (0);
	}
	read_file = read(open_file, buff, letters);
	write_file = write(STDOUT_FILENO, buff, read_file);
	if (open_file == -1 && read_file == -1 && write_file == -1)
	{
		close(open_file);
		return (0);
	}
	free(buff);
	close(open_file);
	return (write_file);
}
