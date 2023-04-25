#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

void error_exit(int err_code, char *msg, char *file);

/**
 * main - Entry point
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 * Return: 0 on success, exit with error code otherwise
 */
int main(int argc, char *argv[])
{
    int src_fd, dest_fd, rd_bytes, wr_bytes;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
        error_exit(97, "Usage: cp file_from file_to", NULL);

    src_fd = open(argv[1], O_RDONLY);
    if (src_fd == -1)
        error_exit(98, "Error: Can't read from file", argv[1]);

    dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (dest_fd == -1)
        error_exit(99, "Error: Can't write to", argv[2]);

    while ((rd_bytes = read(src_fd, buffer, BUFFER_SIZE)) > 0)
    {
        wr_bytes = write(dest_fd, buffer, rd_bytes);
        if (wr_bytes != rd_bytes)
            error_exit(99, "Error: Can't write to", argv[2]);
    }

    if (rd_bytes == -1)
        error_exit(98, "Error: Can't read from file", argv[1]);

    if (close(src_fd) == -1)
        error_exit(100, "Error: Can't close fd", argv[1]);

    if (close(dest_fd) == -1)
        error_exit(100, "Error: Can't close fd", argv[2]);

    return (0);
}

/**
 * error_exit - exit the program with an error code and message
 * @err_code: the error code to exit with
 * @msg: the error message to print
 * @file: the file associated with the error, if applicable
 */
void error_exit(int err_code, char *msg, char *file)
{
    if (file)
        dprintf(STDERR_FILENO, "%s %s\n", msg, file);
    else
        dprintf(STDERR_FILENO, "%s\n", msg);
    exit(err_code);
}

