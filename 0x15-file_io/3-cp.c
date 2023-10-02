#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

/**
 * error_exit - eroor message
 * @code: code
 * @message: error message
 */
void error_exit(int code, const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(code);
}

/**
 * main - main function
 * @argc: argc
 * @argv: argv
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to, read_result, write_result;
char buffer[1024];

if (argc != 3)
error_exit(97, "Usage: cp file_from file_to");

fd_from = open(argv[1], O_RDONLY);

if (fd_from == -1)
error_exit(98, "Error: Can't read from file");

fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
	S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

if (fd_to == -1)
error_exit(99, "Error: Can't write to file");
while ((read_result = read(fd_from, buffer, 1024)) > 0)
{
write_result = write(fd_to, buffer, read_result);
if (write_result == -1 || write_result != read_result)
error_exit(99, "Error: Can't write to file");
}
if (read_result == -1)
error_exit(98, "Error: Can't read from file");
if (close(fd_from) == -1)
error_exit(100, "Error: Can't close fd");
if (close(fd_to) == -1)
error_exit(100, "Error: Can't close fd");
return (0);
}
