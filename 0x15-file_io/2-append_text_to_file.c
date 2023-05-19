#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * append_text_to_file - creates a file and puts text in it
 * with 600 perms (do not change if it exists)
 *
 * @filename: filename
 * @text: text to put into file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text)
{
	int file;
	ssize_t length = 0, inlen = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
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
