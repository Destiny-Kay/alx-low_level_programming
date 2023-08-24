#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_Magic_and_Class- prints the Magic in elf header
 * @header: elf file pointer
*/
void print_Magic_and_Class(Elf64_Ehdr *header)
{
int i;

printf("Magic: ");
for (i = 0; i < EI_NIDENT; i++)
{
	printf("%02x ", header->e_ident[i]);
}
printf("\n");
printf("Class: ");
switch (header->e_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("None\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("Unknown\n");
}
}

/**
 * print_Data- prints the Magic in elf header
 * @header: pointer to elf file
*/
void print_Data(Elf64_Ehdr *header)
{
printf("Data: ");
switch (header->e_ident[EI_DATA])
{
case ELFDATANONE:
	printf("None\n");
	break;
case ELFDATA2LSB:
	printf("2's complement, little endian\n");
	break;
case ELFDATA2MSB:
	printf("2's complement, big endian\n");
	break;
default:
	printf("Unknown\n");
}
}

/**
 * display_elf_header- displays information in an elf header
 * @header: points to first element in the elf header
 */
void display_elf_header(Elf64_Ehdr *header)
{
print_Magic_and_Class(header);
print_Data(header);
printf("Version: %d\n", header->e_ident[EI_VERSION]);
printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);
printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
printf("Type: ");
switch (header->e_type)
{
case ET_NONE:
	printf("None\n");
	break;
case ET_REL:
	printf("Relocatable\n");
	break;
case ET_EXEC:
	printf("Executable\n");
	break;
case ET_DYN:
	printf("Shared object\n");
	break;
case ET_CORE:
	printf("Core\n");
	break;
default:
	printf("Unknown\n");
}
printf("Entry point address: 0x%lx\n", header->e_entry);
}
/**
 * main- function entry point
 * @argc: argument counter
 * @argv: argument variables
 * Return: exit status
*/
int main(int argc, char **argv)
{
int fd;
Elf64_Ehdr header;

if (argc != 2)
{
	fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
	exit(98);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
	perror("open");
	exit(98);
}

if (read(fd, &header, sizeof(header)) != sizeof(header))
{
	fprintf(stderr, "Error reading ELF header\n");
	close(fd);
	exit(98);
}

if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
	header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
	fprintf(stderr, "Not an ELF file\n");
	close(fd);
	exit(98);
}

display_elf_header(&header);

close(fd);
return (0);
}