/**
  * _memcpy - function that copies memory area
  *
  * @dest: dest argument
  *
  * @src: src argument
  *
  * @n: int
  *
  * Return: char
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
