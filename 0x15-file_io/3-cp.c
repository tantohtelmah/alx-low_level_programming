#include "main.h"

/**
 * append_text_to_file - append text to EOF
 * @filename: char
 * @text_content: size_t
 * Return: ssize_t
*/

int main(int argc, char *argv[])
{
	int open_file_from;
	int open_file_to;
	int write_file_to;
	int read_file_from;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cd file_from file_to\n");
		exit(97);
	}
	open_file_from = open(argv[1], O_RDONLY);
	if (argv[1] == NULL || open_file_from == -1)
	{
		close(open_file_from);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buff = malloc(1024);
	if (buff == NULL)
	{
		return (0);
	}
	read_file_from = read(open_file_from, buff, 1024);
	open_file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 777);
	write_file_to = write(open_file_to, buff, read_file_from);
	if (open_file_to == -1 || write_file_to == -1)
	{
		close(open_file_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(99);
	}
	close(open_file_from);
	close(open_file_to);
	return (1);
}
