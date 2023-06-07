#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 64

/**
 * struct ElfHeader - ELF file header structure
 * @magic: ELF magic number
 * @class: ELF file class (32-bit or 64-bit)
 * @data: ELF data encoding (little endian or big endian)
 * @version: ELF file version
 * @osabi: OS/ABI identification
 * @abiversion: ABI version
 * @padding: Padding bytes
 * @type: ELF file type
 * @machine: Target instruction set architecture
 * @version2: ELF version
 * @entry: Entry point address
 * @phoff: Program header table offset
 * @shoff: Section header table offset
 * @flags: Processor-specific flags
 * @ehsize: ELF header size
 * @phentsize: Size of each program header entry
 * @phnum: Number of program header entries
 * @shentsize: Size of each section header entry
 * @shnum: Number of section header entries
 * @shstrndx: Section header table index for the section name string table
 *
 * Description: Structure representing the ELF file header.
 **/
typedef struct ElfHeader
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

/**
 * print_error - Print error message and exit
 * @error_message: The error message to be printed
 *
 * Description: This function prints the error message to stderr and exits
 * with status code 98.
 **/
void print_error(const char *error_message)
{
	fprintf(stderr, "Error: %s\n", error_message);
	exit(98);
}

/**
 * print_elf_header - Print ELF header information
 * @header: Pointer to the ELF header structure
 *
 * Description: This function prints the information contained in the ELF header
 * at the start of an ELF file.
 **/
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
	}
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: This function is the entry point of the program. It reads an ELF
 * file and prints the information contained in the ELF header.
 *
 * Return: 0 on success, 1 on failure
 **/
int main(int argc, char *argv[])
{
	int fd, bytes_read;
	ElfHeader header;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
		return 1;
	}

	/* Open the ELF file */
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Cannot open ELF file");

	/* Read the ELF header */
	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read != sizeof(header))
		print_error("Cannot read ELF header");

	/* Print the ELF header */
	print_elf_header(&header);

	/* Close the ELF file */
	close(fd);

	return 0;
}
