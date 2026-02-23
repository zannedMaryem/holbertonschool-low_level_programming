#includ "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: destination area
 * @src: source area
 * @n: number of elements to copy
 *
 * Return: Returns a pointer to dest
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
