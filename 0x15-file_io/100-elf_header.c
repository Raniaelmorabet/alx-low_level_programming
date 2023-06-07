#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 64

typedef struct
{
    unsigned char magic[4];
    unsigned char class;
    unsigned char data;
    unsigned char version;
    unsigned char osabi;
    unsigned char abiversion;
    unsigned char padding[7];
    unsigned short type;
    unsigned short machine;
    unsigned int version2;
    unsigned long entry;
    unsigned long phoff;
    unsigned long shoff;
    unsigned int flags;
    unsigned short ehsize;
    unsigned short phentsize;
    unsigned short phnum;
    unsigned short shentsize;
    unsigned short shnum;
    unsigned short shstrndx;
} ElfHeader;

void print_error(const char *error_message)
{
    fprintf(stderr, "Error: %s\n", error_message);
    exit(98);
}

void print_elf_header(const ElfHeader *header)
{
    printf("ELF Header:\n");
    printf("  Magic:   %02x %02x %02x %02x\n",
           header->magic[0], header->magic[1], header->magic[2], header->magic[3]);
    printf("  Class:                             ELF%d\n", header->class == 1 ? 32 : 64);
    printf("  Data:                              %s\n", header->data == 1 ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header->version);
    printf("  OS/ABI:                            ");
    switch (header->osabi)
    {
        case 0:
            printf("UNIX - System V\n");
            break;
        case 1:
            printf("HP-UX\n");
            break;
        case 2:
            printf("NetBSD\n");
            break;
        case 3:
            printf("Linux\n");
            break;
        case 6:
            printf("Solaris\n");
            break;
        case 7:
            printf("AIX\n");
            break;
        case 8:
            printf("IRIX\n");
            break;
        case 9:
            printf("FreeBSD\n");
            break;
        case 10:
            printf("Tru64\n");
            break;
        case 11:
            printf("Novell Modesto\n");
            break;
        case 12:
            printf("OpenBSD\n");
            break;
        case 13:
            printf("OpenVMS\n");
            break;
        case 14:
            printf("NonStop Kernel\n");
            break;
        case 15:
            printf("AROS\n");
            break;
        case 16:
            printf("Fenix OS\n");
            break;
        case 17:
            printf("CloudABI\n");
            break;
        default:
            printf("<unknown: %d>\n", header->osabi);
            break;
    }
    printf("  ABI Version:                       %d\n", header->abiversion);
    printf("  Type:                              ");
    switch (header->type)
    {
        case 0:
            printf("NONE (No file type)\n");
            break;
        case 1:
            printf("REL (Relocatable file)\n");
            break;
        case 2:
            printf("EXEC (Executable file)\n");
            break;
        case 3:
            printf("DYN (Shared object file)\n");
            break;
        case 4:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("<unknown: %d>\n", header->type);
            break;
    }
    printf("  Entry point address:               0x%lx\n", header->entry);
}

int main(int argc, char *argv[])
{
    int fd;
    ElfHeader header;

    if (argc != 2)
        print_error("Usage: elf_header elf_filename");

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        print_error("Cannot open file");

    if (read(fd, &header, sizeof(ElfHeader)) != sizeof(ElfHeader))
        print_error("Cannot read file");

    print_elf_header(&header);

    close(fd);
    return 0;
}
