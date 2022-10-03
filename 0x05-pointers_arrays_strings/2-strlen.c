/**
 * _strlen - a function that printsbthe string;
 *		length.
 * @s: string value
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; ++s)
		++count;
	return (count);
}
