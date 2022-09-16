/**
 * _isupper - check if c is uppercase
 *
 * @c: input for alphabet
 *
 * Return: 1 if c uppercase, 0 if otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
