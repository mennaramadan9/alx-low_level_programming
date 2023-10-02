#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

char *create_buffer(void);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(void)
{
char *buffer = malloc(1024);
if (buffer == NULL)
exit(99);
return (buffer);
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
if (close(fd) == -1)
exit(100);
}

/**
 * main - cp
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
int from, to, r, w;
char *buffer;

if (argc != 3)
exit(97);

buffer = create_buffer();
from = open(argv[1], O_RDONLY);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

while ((r = read(from, buffer, 1024)) > 0)
{
w = write(to, buffer, r);
if (w == -1)
exit(99);
}

free(buffer);
close_file(from);
close_file(to);

return (0);
}
