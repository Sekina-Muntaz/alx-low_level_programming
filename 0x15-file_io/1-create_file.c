#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * create_file - function that creates a file and puts text in it
 * with 600 perms (do not change if it exists)
 *
 * @filename: file name
 * @text: text to put into file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text)
{
	int file;
	int length = 0, inlen = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text != NULL)
	{
		for (inlen = 0, ptr = text; *ptr; ptr++)
			inlen++;
		length = write(file, text, inlen);
	}

	if (close(file) == -1 || inlen != length)
		return (-1);
	return (1);
}
