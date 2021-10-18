#include "main.h"
#include <elf.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned char *e_ident, unsigned int e_type);
void print_entry(unsigned char *e_ident, unsigned int e_entry);

unsigned int bigend_to_littleend(unsigned int num, int bytes);

/**
 * main - Prints elf header of elf file
 * @ac: Arg count
 * @av: Arg array
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int fd;
	Elf64_Ehdr *elf64;
	int elf_size = sizeof(Elf64_Ehdr);
	/* failing cases: sortix32, sparcbigendian32*/

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: ./elf_header ELF_FILE\n");
		exit(98);
	}

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Could not open the file\n");
		exit(98);
	}

	elf64 = malloc(elf_size);
	if (elf64 == NULL)
	{
		close(fd);
		dprintf(STDERR_FILENO, "Error: Could not allocate memory file\n");
		exit(98);
	}

	if (read(fd, elf64, elf_size) == -1)
	{
		close(fd);
		free(elf64);
		dprintf(STDERR_FILENO, "Error: Could not read the file\n");
		exit(98);
	}

	check_elf(elf64->e_ident);
	print_magic(elf64->e_ident);
	print_class(elf64->e_ident);
	print_data(elf64->e_ident);
	print_version(elf64->e_ident);
	print_osabi(elf64->e_ident);
	printf("  ABI Version:                       %d\n",
		elf64->e_ident[EI_ABIVERSION]);
	print_type(elf64->e_ident, elf64->e_type);
	print_entry(elf64->e_ident, elf64->e_entry);

	free(elf64);
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Could not close fd %d\n", fd);
		exit(98);
	}

	return (0);
}

/**
 * check_elf - Verifies that a file is an elf file
 * @e_ident: Array of chars containing info of the elf file
 */
void check_elf(unsigned char *e_ident)
{
	if (
		e_ident[EI_MAG0] != 0x7f ||
		e_ident[EI_MAG1] != 'E' ||
		e_ident[EI_MAG2] != 'L' ||
		e_ident[EI_MAG3] != 'F'
	)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}

	printf("ELF Header:\n");
}

/**
 * print_magic - Prints the magic values of an elf file
 * @e_ident: Array of chars containing info of the elf file
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT - 1; i++)
		printf("%2.2x ", e_ident[i]);

	printf("%2.2x\n", e_ident[EI_NIDENT - 1]);
}

/**
 * print_class - Prints the class of the elf file
 * @e_ident: Array of chars containing info of the elf file
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32");
	else if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64");
	else if (e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("none");
	else
		printf("<unknown: %x>", e_ident[EI_CLASS]);

	printf("\n");
}

/**
 * print_data - Prints the machine's endiannes
 * @e_ident: Array of chars containing info of the elf file
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian");
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian");
	else if (e_ident[EI_DATA] == ELFDATANONE)
		printf("none");
	else
		printf("<unknown: %x>", e_ident[EI_DATA]);

	printf("\n");
}

/**
 * print_version - Pprints the version of the elf file
 * @e_ident: Array of chars containing info of the elf file
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d", e_ident[EI_VERSION]);

	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}

/**
 * print_osabi - Prints the os Application Binary Interface of elf file
 * @e_ident: Array of chars containing info of the elf file
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	if (e_ident[EI_OSABI] == ELFOSABI_NONE)
		printf("UNIX - System V");
	else if (e_ident[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX");
	else if (e_ident[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD");
	else if (e_ident[EI_OSABI] == ELFOSABI_GNU)
		printf("UNIX - GNU");
	else if (e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris");
	else if (e_ident[EI_OSABI] == ELFOSABI_AIX)
		printf("UNIX - AIX");
	else if (e_ident[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX");
	else if (e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD");
	else if (e_ident[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64");
	else if (e_ident[EI_OSABI] == ELFOSABI_MODESTO)
		printf("Novell - Modesto");
	else if (e_ident[EI_OSABI] == ELFOSABI_OPENBSD)
		printf("UNIX - OpenBSD");
	else if (e_ident[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM");
	else if (e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App");
	else
		printf("<unknown: %x>", e_ident[EI_OSABI]);

	printf("\n");
}

/**
 * print_type - Prints the type of an elf file
 * @e_ident: Array of chars containing info of the elf file
 * @e_type: Type of the elf file
 */
void print_type(unsigned char *e_ident, unsigned int e_type)
{
	printf("  Type:                              ");

	/* If is big endiann 32bits, we need to change the bytes and */
	/* use only 2 first bytes */
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		if (e_ident[EI_CLASS] == ELFCLASS32)
			e_type = bigend_to_littleend(e_type, 2);
		else
			e_type = bigend_to_littleend(e_type, 4);
	}

	if (e_type == ET_NONE)
		printf("NONE (None)");
	else if (e_type == ET_REL)
		printf("REL (Relocatable file)");
	else if (e_type == ET_EXEC)
		printf("EXEC (Executable file)");
	else if (e_type == ET_DYN)
		printf("DYN (Shared object file)");
	else if (e_type == ET_CORE)
		printf("CORE (Core file)");
	else
		printf("<unknown>: %x", e_type);

	printf("\n");
}

/**
 * print_entry - Prints the type of an elf file
 * @e_ident: Array of chars containing info of the elf file
 * @e_entry: Address value of elf's file entry point
 */
void print_entry(unsigned char *e_ident, unsigned int e_entry)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_entry = bigend_to_littleend(e_entry, 4);

	printf("  Entry point address:               0x%x\n",
		(unsigned int)e_entry);
}

/**
 * bigend_to_littleend - Converts numbers from big endian to little endian
 * @num: Number to be converted
 * @bytes: Number of bytes of the number
 *
 * Return: Number as little endian
 */
unsigned int bigend_to_littleend(unsigned int num, int bytes)
{
	if (bytes == 2)
		return (((num >> 8) | (num << 8)) & 0x00ff);

	return (((num >> 24) & 0xff) | /* move byte 3 to byte 0 */
		((num << 8) & 0xff0000) | /* move byte 1 to byte 2 */
		((num >> 8) & 0xff00) | /* move byte 2 to byte 1 */
		((num << 24) & 0xff000000)); /* byte 0 to byte 3	 */
}

