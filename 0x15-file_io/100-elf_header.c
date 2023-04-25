#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <elf.h>
#include <stdlib.h>

void display_elf_header(Elf64_Ehdr *ehdr)
{
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x ", ehdr->e_ident[i]);
    }
    printf("\n");

    printf("  Class:                             ");
    if (ehdr->e_ident[EI_CLASS] == ELFCLASS32)
        printf("ELF32\n");
    else if (ehdr->e_ident[EI_CLASS] == ELFCLASS64)
        printf("ELF64\n");
    else
        printf("<unknown: %02x>\n", ehdr->e_ident[EI_CLASS]);

    printf("  Data:                              ");
    if (ehdr->e_ident[EI_DATA] == ELFDATA2LSB)
        printf("2's complement, little endian\n");
    else if (ehdr->e_ident[EI_DATA] == ELFDATA2MSB)
        printf("2's complement, big endian\n");
    else
        printf("<unknown: %02x>\n", ehdr->e_ident[EI_DATA]);

    printf("  Version:                           ");
    printf("%d (current)\n", ehdr->e_ident[EI_VERSION]);

    printf("  OS/ABI:                            ");
    // Add other OS/ABI values if necessary
    if (ehdr->e_ident[EI_OSABI] == ELFOSABI_SYSV)
        printf("UNIX - System V\n");
    else if (ehdr->e_ident[EI_OSABI] == ELFOSABI_NETBSD)
        printf("UNIX - NetBSD\n");
    else if (ehdr->e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
        printf("UNIX - Solaris\n");
    else
        printf("<unknown: %02x>\n", ehdr->e_ident[EI_OSABI]);

    printf("  ABI Version:                       ");
    printf("%d\n", ehdr->e_ident[EI_ABIVERSION]);

    printf("  Type:                              ");
    if (ehdr->e_type == ET_EXEC)
        printf("EXEC (Executable file)\n");
    else if (ehdr->e_type == ET_DYN)
        printf("DYN (Shared object file)\n");
    else
        printf("<unknown: %04x>\n", ehdr->e_type);

    printf("  Entry point address:               ");
    printf("0x%lx\n", (unsigned long)ehdr->e_entry);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: elf_header elf_filename\n");
        exit(98);
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    Elf64_Ehdr ehdr;
    ssize_t read_bytes = read(fd, &ehdr, sizeof(Elf64_Ehdr));
    if (read_bytes != sizeof(Elf64_Ehdr))
    {
        fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
        close(fd);
        exit(98);
    }

    if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0)
    {
        fprintf(stderr, "Error: %s is not an ELF file\n", argv[1]);
        close(fd);
        exit(98);
    }

    display_elf_header(&ehdr);

    close(fd);
    return 0;
}

