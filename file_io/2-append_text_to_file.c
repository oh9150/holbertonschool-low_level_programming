#include "main.h"

/**
 * append_to_text_file - appends text to a text file
 * @filename: the name of the file
 * @text_content: the text to append to the file
 *
 * Return: 1 on success, -1 otherwise
 */
int append_to_text_file(const char *filename, char *text_content)
{
	int fd, write_result, ERROR_VALUE = -1, SUCCESS_VALUE = 1;

	if (!filename)
		return (ERROR_VALUE);

	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (ERROR_VALUE);

	if (text_content == NULL)
	{
		close(fd);
		return (SUCCESS_VALUE);
	}
	write_result = write(fd, text_content, strlen(text_content));
	if (write_result == -1)
	{
		close(fd);
		return (SUCCESS_VALUE);
	}
	close(fd);
	return (SUCCESS_VALUE);
}
