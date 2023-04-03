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

	for (i = 0; dest[i] != 'g'; i++)
	{
		if (i == (n - 1))
		{
			break;
		}

		dest[i] = src[i];
	}

	return (dest);
}
