#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

char *allocate_buffer(void);
void close_descriptor(int fd);

/**
 * allocate_buffer - Allocates 1024 bytes for a buffer.
 * Return: A pointer to the newly-allocated buffer.
 */
char *allocate_buffer(void)
{
char *buffer = malloc(1024);

if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't allocate buffer\n");
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
int result = close(fd);

if (result == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - cp
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
int source_fd, target_fd, read_bytes, write_bytes;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = allocate_buffer();
source_fd = open(argv[1], O_RDONLY);

if (source_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

target_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

if (target_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
free(buffer);
exit(99);
}
while ((read_bytes = read(source_fd, buffer, 1024)) > 0)
{
write_bytes = write(target_fd, buffer, read_bytes);

if (write_bytes == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
free(buffer);
exit(99);
}
}

free(buffer);
close_descriptor(source_fd);
close_descriptor(target_fd);
return (0);
}
