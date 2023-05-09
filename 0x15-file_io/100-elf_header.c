#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * error_and_exit - prints an error message to stderr and exits
 * @str: the error message to print
 */
void error_and_exit(const char *str)
{
    fprintf(stderr, "%s\n", str);
    exit(98);
}

/**
 * check_elf - checks the magic numbers to confirm file is an ELF file
 * @e_ident: a pointer to an array of bytes
 */
void check_elf(unsigned char *e_ident)
{
    unsigned int i;

    if (e_ident[EI_MAG0] != ELFMAG0 || e_ident[EI_MAG1] != ELFMAG1 ||
        e_ident[EI_MAG2] != ELFMAG2 || e_ident[EI_MAG3] != ELFMAG3)
    {
        error_and_exit("This is not an ELF file");
    }

    printf("ELF Header:\n  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x ", e_ident[i]);
    }
    printf("\n");
}

/**
 * main - entry point
 * @argc: the number of command line arguments
 * @argv: the array of command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    int fd;
    ssize_t bytes_read;
    char elf_header[64];

    if (argc != 2)
    {
        fprintf(stderr, "Usage: elf_header elf_filename\n");
        return (98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        error_and_exit("Failed to open file");
    }

    bytes_read = read(fd, elf_header, 64);
    if (bytes_read != 64)
    {
        close(fd);
        error_and_exit("Failed to read file");
    }

    close(fd);

    check_elf((unsigned char *)elf_header);

    return (0);
}
