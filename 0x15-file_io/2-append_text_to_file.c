#include "main.h"
/**
  * append_text_to_file - append txt to file
  *
  * @filename: filename
  *
  * @text_content: content of file
  *
  * Return: Always 0 (Success)
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int o_file, w_file, i;

	if (filename == NULL)
		return (-1);
	if (access(filename, W_OK) == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	o_file = open(filename, O_WRONLY | O_APPEND);
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
