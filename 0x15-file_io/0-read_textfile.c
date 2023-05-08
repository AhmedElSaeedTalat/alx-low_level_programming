#include "main.h"
/**
  * read_textfile - reads a text file and prints it to the POSIX
  *
  * @filename: file name
  *
  * @letters: letters
  *
  * Return: Always 0 (Success)
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o_file, r_file, w_file;
	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL || filename == NULL)
		return (0);
	o_file = open(filename, O_RDONLY);
	if (o_file == -1)
		return (0);
	r_file = read(o_file, buffer, letters);
	if (r_file == -1)
		return (0);
	w_file = write(STDOUT_FILENO, buffer, letters);
	if (w_file == -1)
		return (0);
	free(buffer);
	close(o_file);
	return (r_file);
}
