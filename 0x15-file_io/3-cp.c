#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocate_buffer(char *output_file);
void close_descriptor(int fd);

/**
 * allocate_buffer - Allocates a buffer of 1024 bytes for file I/O.
 * @output_file: The name of the output file.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *allocate_buffer(char *output_file)
{
char *buffer;

buffer = malloc(sizeof(char) * 1024);

if (buffer == NULL)
{
dprintf(STDERR_FILENO,
	"Error: Can't allocate memory for %s\n", output_file);
exit(99);
}
return (buffer);
}

/**
 * close_descriptor - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_descriptor(int fd)
{
int result;

result = close(fd);

if (result == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fd);
exit(100);
}
}

/**
 * main - Copies the contents of one file to another.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the command-line arguments.
 * Return: 0 on success, or appropriate exit codes on failure.
 */
int main(int argc, char *argv[])
{
int source_fd, destination_fd, read_result, write_result;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = allocate_buffer(argv[2]);
source_fd = open(argv[1], O_RDONLY);
read_result = read(source_fd, buffer, 1024);
destination_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (source_fd == -1 || read_result == -1)
{
dprintf(STDERR_FILENO,
	"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

write_result = write(destination_fd, buffer, read_result);
if (destination_fd == -1 || write_result == -1)
{
dprintf(STDERR_FILENO,
	"Error: Can't write to file %s\n", argv[2]);
free(buffer);
exit(99);
}

read_result = read(source_fd, buffer, 1024);
destination_fd = open(argv[2], O_WRONLY | O_APPEND);

} while (read_result > 0);

free(buffer);
close_descriptor(source_fd);
close_descriptor(destination_fd);

return (0);
}
