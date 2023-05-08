#include "main.h"
/**
  * create_file - create file
  *
  * @filename: file name
  *
  * @text_content: content of file
  *
  * Return: 1 on (Success)
  */
int create_file(const char *filename, char *text_content)
{
	int o_file, w_file, i;

	if (filename == NULL)
		return (-1);
	o_file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (o_file == -1)
		return (-1);
	i = 0;
	while (text_content[i])
		i++;
	w_file = write(o_file, text_content, i);
	if (w_file == -1)
		return (-1);
	close(o_file);
	return (1);
}
