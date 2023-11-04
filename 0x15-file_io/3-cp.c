#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: An array of arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
    int from_fd, to_fd;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    from_fd = open(argv[1], O_RDONLY);
    if (from_fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (to_fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
        close(from_fd);
        exit(99);
    }

    do
    {
        bytes_read = read(from_fd, buffer, BUFFER_SIZE);
        if (bytes_read == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
            close(from_fd);
            close(to_fd);
            exit(98);
        }

        bytes_written = write(to_fd, buffer, bytes_read);
        if (bytes_written == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
            close(from_fd);
            close(to_fd);
            exit(99);
        }
    } while (bytes_read > 0);

    if (close(from_fd) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
        exit(100);
    }
    if (close(to_fd) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
        exit(100);
    }

    return (0);
}

