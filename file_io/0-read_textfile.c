#include "main.h"

/**
 * read_textfile - reads a file and prints it to standard output
 * @filename: the name of the file
 * @letters: the ammount of letters to read
 *
 * Return: the actual number of letters it could print, 0 if the file
 * cannot be opened or read or if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_value, write_value;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open (filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	read_value = read(fd, buf, letters);
	if (read_value == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	write_value = write(STOUT_FILENO, buf, read_value);
	if (write_value == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	return(write_value);
}
