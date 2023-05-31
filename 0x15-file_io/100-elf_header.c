#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 64

typedef struct {
    unsigned char magic[4];
    unsigned char class;
    unsigned char data;
    unsigned char version;
    unsigned char osabi;
    unsigned char abiversion;
    unsigned char type[2];
    unsigned char entry[8];
} ElfHeader;

void print_error(const char *msg) {
    fprintf(stderr, "%s\n", msg);
    exit(98);
}

void print_elf_header(const ElfHeader *header) {
    printf("ELF Header:\n");
    printf("  Magic:   %02x %02x %02x %02x\n", header->magic[0], header->magic[1], header->magic[2], header->magic[3]);
    printf("  Class:                             ");
    switch (header->class) {
        case 1:
            printf("ELF32\n");
            break;
        case 2:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown>\n");
            break;
    }
    printf("  Data:                              ");
    switch (header->data) {
        case 1:
            printf("2's complement, little endian\n");
            break;
        case 2:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown>\n");
            break;
    }
    printf("  Version:                           %d (current)\n", header->version);
    printf("  OS/ABI:                            ");
    switch (header->osabi) {
        case 0:
            printf("UNIX - System V\n");
            break;
        case 1:
            printf("UNIX - HP-UX\n");
            break;
        case 2:
            printf("UNIX - NetBSD\n");
            break;
        case 3:
            printf("UNIX - Linux\n");
            break;
        case 6:
            printf("UNIX - Solaris\n");
            break;
        case 7:
            printf("UNIX - AIX\n");
            break;
        case 8:
            printf("UNIX - IRIX\n");
            break;
        case 9:
            printf("UNIX - FreeBSD\n");
            break;
        case 10:
            printf("UNIX - Tru64\n");
            break;
        case 11:
            printf("UNIX - Novell Modesto\n");
            break;
        case 12:
            printf("UNIX - OpenBSD\n");
            break;
        case 13:
            printf("UNIX - OpenVMS\n");
            break;
        case 14:
            printf("UNIX - NonStop Kernel\n");
            break;
        case 15:
            printf("UNIX - AROS\n");
            break;
        case 16:
            printf("UNIX - FenixOS\n");
            break;
        case 17:
            printf("UNIX - CloudABI\n");
            break;
        case 18:
            printf("UNIX - Sortix\n");
            break;
        default:
            printf("<unknown: %d>\n", header->osabi);
            break;
    }
    printf("  ABI Version:                       %d\n", header->abiversion);
    printf("  Type:                              %c%c%c%c (",
           header->type[3], header->type[2], header->type[1], header->type[0]);
    switch (*((unsigned int *)header->type)) {
        case 0:
            printf("NONE");
            break;
