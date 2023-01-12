#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of @s2 to concatenate to @s1
 * Return: pointer to a space in memory which contains the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, i, j;
	char *str;

	/*treat NULL as empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = b = 0;
	/*length of s1 & s2 respectively*/
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	/*set n to length of s2*/
	if (n >= b)
		n = b;

	str = (char *) malloc((a + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	/*add s1 to str*/
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	/*add s2 n bytes to str*/
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
