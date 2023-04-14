#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: the text to write in the file
 *
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_result, ERROR_VALUE = -1, SUCCESS_VALUE = 1;

	if (!filename)
		return (ERROR_VALUE);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC);
	if (fd == -1)
		return (ERROR_VALUE);

	write_result = write(fd, text_content, sizeof(text_content));
	if (write_result == -1)
	{
		close(fd);
		return (SUCCESS_VALUE);
	}
	close(fd);
	return (SUCCESS_VALUE);
}
