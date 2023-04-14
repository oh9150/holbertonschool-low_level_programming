#include "main.h"

/**
 * _exit - auxiliary function for exit
 * @value: the value to exit with
 * @filename: the name of a file
 * @fd: a file descriptor
 * Return: void
 */
void __exit(int value,char *filename, int fd)
{
	switch (value)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error Can't write to %s\n", filename);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			break;
	}
	exit(value);
}
/**
 * main - entry point, copies the content of argv[2] to a new file of name
 * argv[3].
 * @argc: the ammount of arguments
 * @argv: an array containing all the arguments
 *
 * Return: 0, exit if fail.
 */
int main(int argc, char **argv)
{
	int read_value, write_value, fd, fd1;
	char buf[1024];

	if (argc != 3)
		__exit(97, NULL, 0);

	fd = open(argv[1], O_TRUNC | O_RDONLY);
	if (fd == -1)
		__exit(98, argv[1], 0);

	fd1 = open(argv[2], O_CREAT | O_WRONLY, 664);
	if (fd1 == -1)
		__exit(99, argv[2], 0);

	while ((read_value = read(fd, buf, 1024)) != 0)
	{
		if (read_value == -1)
			__exit(98, argv[1], 0);
		write_value = write(fd1, buf, 1024);
		if (write_value == -1)
			__exit(99, argv[2], 0);
	}
	if (close(fd) == -1)
		__exit(100, NULL, fd);
	if (close(fd1) == -1)
		__exit(100, NULL, fd1);
	return (0);
}
