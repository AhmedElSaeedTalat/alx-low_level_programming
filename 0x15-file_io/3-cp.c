#include "main.h"
/**
  * print_error - print error if file
  * can't be read
  *
  * @file_from: name of file
  */
void print_error(char *file_from)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
}

/**
  * print_error2 - print error if file
  * can't be opened to written to.
  * @buffer: buffer to free
  * @file_to: name of file.
  */
void print_error2(char *file_to, char *buffer)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	free(buffer);
	exit(99);
}
/**
  * print_error3 - print error if file
  * doesn't close
  * @buffer: buffer
  * @close: returned value
  */
void print_error3(int close, char *buffer)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close);
	free(buffer);
	exit(100);
}
/**
  * main - Entry point
  *
  * @argc: count arguments
  *
  * @argv: actual arguments passed
  *
  * Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	int o_file, r_file, o_file2, w_file2, close1, close2;
	char *file_from = argv[1], *file_to = argv[2], *buffer;
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	o_file = open(file_from, O_RDONLY);
	if (o_file == -1)
		print_error(file_from);
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		print_error2(file_to, buffer);
	if (access(file_to, F_OK) != -1)
		o_file2 = open(file_to, O_CREAT | O_TRUNC | O_WRONLY);
	else
		o_file2 = open(file_to, O_CREAT | O_WRONLY, permissions);
	if (o_file2 == -1)
		print_error2(file_to, buffer);
	while ((r_file = read(o_file, buffer, 1024))  > 0)
	{
		w_file2 = write(o_file2, buffer, r_file);
		if (w_file2 == -1)
			print_error2(file_to, buffer);
	}
	if (r_file == -1)
		print_error(file_from);
	close1 = close(o_file), close2 = close(o_file2);
	if (close1 == -1)
		print_error3(o_file, buffer);
	else if (close2 == -1)
		print_error3(o_file2, buffer);
	free(buffer);
	return (0);
}
