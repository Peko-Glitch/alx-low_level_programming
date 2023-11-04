#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * error - Prints an error message and exits the program.
 * @msg: The error message to print.
 * @file: The file name to print in the error message.
 * @exit_code: The exit code to use when exiting the program.
 */
void error(char *msg, char *file, int exit_code)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, file);
	exit(exit_code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: The command-line arguments.
 *
 * Return: If an error occurs - a status code.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		error("usage: cp file_from file_to", "", 97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error("Error: Can't read from file", argv[1], 98);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		error("Error: Can't write to", argv[2], 99);

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			error("Error: Can't write to", argv[2], 99);
	}

	if (bytes_read == -1)
		error("Error: Can't read from file", argv[1], 98);

	if (close(file_from) == -1)
		error("Error: Can't close fd", argv[1], 100);

	if (close(file_to) == -1)
		error("Error: Can't close fd", argv[2], 100);

	return (0);
}
