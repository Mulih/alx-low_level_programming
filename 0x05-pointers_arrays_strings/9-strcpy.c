/**
 * _strcpy - copies the string pointed to br src
 * @dest: destination of string
 * @src: copied string
 *
 * Return: copied string
 *
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (*src)
	{
		src++;
		count++;
	}

	for (i = 0; i < count; i++)
		src--;

	for (i = 0; i < count; i++)
	{
		dest[i] = *src;
		src++;
	}

	dest[i] = *src;

	return (dest);
}
