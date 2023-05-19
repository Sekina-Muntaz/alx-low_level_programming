#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - prints text from a file
 *
 * @filename: file name
 * @characters: number of characters to read
 *
 * Return: actual number of characters read, 0 if end of file
 */
ssize_t read_textfile(const char *filename, size_t characters)
{
	int file;
	int length, charswritten;
	char *buf;

	if (filename == NULL || characters == 0)
		return (0);
	buf = malloc(sizeof(char) * (characters));
	if (buf == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buf);
		return (0);
	}
	length = read(file, buf, characters);
	if (length == -1)
	{
		free(buf);
		close(file);
		return (0);
	}

	charswritten = write(STDOUT_FILENO, buf, length);

	free(buf);
	close(file);
	if (charswritten != length)
		return (0);
	return (length);
}
