#include "main.h"
/**
 * _islower - checks for lowercase character
 *@c: the character to be checked
 * Retuen: 1 for lowercasw character or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

