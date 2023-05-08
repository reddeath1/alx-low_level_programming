#include "main.h"
#include <elf.h>
/**
 * main - An entry point for the program to get header of ELF file
 * @argc: Number of arguments
 * @argv: Pointer to array of arguments
 * Return: (1 on success, error code on failure)
 */
void print_error(char *message);
void print_elf_header(Elf64_Ehdr *ehdr);

int main(int argc, char *argv[]) 
{
    Elf64_Ehdr ehdr;
    int fd;

    if (argc != 2)
    {
        print_error("Invalid number of arguments");
    }

    fd = open(argv[1], O_RDONLY);

    if (fd == -1)
    {
        print_error("Unable to open file");
    }

    if (read(fd, &ehdr, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
    {
        print_error("Unable to read ELF header");
    }

    if (ehdr.e_ident[EI_MAG0] != ELFMAG0 ||
    ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
    ehdr.e_ident[EI_MAG2] != ELFMAG2 ||
    ehdr.e_ident[EI_MAG3] != ELFMAG3)
    {
        print_error("File is not an ELF file");
    }

    print_elf_header(&ehdr);
    close(fd);
    return 0;
}

/**
 * print_error - main function to print error message
 * @message: error message
 * Return: Nothing
 */
void print_error(char *message) 
{
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

/**
 * print_elf_header - main function to print elf header
 * @ehdr: elf header argument
 * Return: Nothing
 */
void print_elf_header(Elf64_Ehdr *ehdr)
{
    printf("ELF Header:\n");
    printf("  Magic:   ");
    
    for (int i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x ", ehdr->e_ident[i]);
    }

    printf("\n");
    printf("  Class:");
    
    switch (ehdr->e_ident[EI_CLASS])
    {
        case ELFCLASSNONE:
            printf("none\n");
            break;
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown: %02x>\n", ehdr->e_ident[EI_CLASS]);
            break;
    }
    
    printf("  Data:");
    
    switch (ehdr->e_ident[EI_DATA])
    {
        case ELFDATANONE:
            printf("none\n");
            break;
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown: %02x>\n", ehdr->e_ident[EI_DATA]);
            break;
    }
    
    printf("  Version:%d\n", ehdr->e_ident[EI_VERSION]);
    printf("  OS/ABI:");
    
    switch (ehdr->e_ident[EI_OSABI]) 
    {
        case ELFOSABI_NONE:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("UNIX - HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        case ELFOSABI_AIX:
            printf("UNIX - AIX\n");
            break;
        case ELFOSABI_IRIX:
            printf("UNIX - IRIX\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("UNIX - FreeBSD\n");
            break;
        case ELFOSABI_TRU64:
            printf("UNIX - TRU64\n");
            break;
        case ELFOSABI_MODESTO:
            printf("Novell - Modesto\n");
            break;
        case ELFOSABI_OPENBSD:
            printf("UNIX - OpenBSD\n");
            break;
        default:
            printf("<unknown: %02x>\n", ehdr->e_ident[EI_OSABI]);
            break;
    }
    
    printf("  ABI Version:%d\n", ehdr->e_ident[EI_ABIVERSION]);
    printf("  Type:");
    
    switch (ehdr->e_type)
    {
        case ET_NONE:
            printf("NONE (None)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            case ET_CORE:
        printf("CORE (Core file)\n");
        break;
        default:
        printf("<unknown: %04x>\n", ehdr->e_type);
        break;
    }

    printf("  Entry point address:               %lx\n", ehdr->e_entry);
    printf("  Start of program headers:          %ld (bytes into file)\n", ehdr->e_phoff);
    printf("  Start of section headers:          %ld (bytes into file)\n", ehdr->e_shoff);
    printf("  Flags:                             %08x\n", ehdr->e_flags);
    printf("  Size of this header:               %d (bytes)\n", ehdr->e_ehsize);
    printf("  Size of program headers:            %d (bytes)\n", ehdr->e_phentsize);
    printf("  Number of program headers:          %d\n", ehdr->e_phnum);
    printf("  Size of section headers:            %d (bytes)\n", ehdr->e_shentsize);
    printf("  Number of section headers:          %d\n", ehdr->e_shnum);
    printf("  Section header string table index: %d\n", ehdr->e_shstrndx);
}
