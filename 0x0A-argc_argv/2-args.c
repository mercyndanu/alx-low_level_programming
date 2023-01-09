#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argv: arguments
 * @argc: argument count
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int a;

	for (a = 0; a < argc; a++)

		printf("%s\n", argv[a]);

	return (0);
}
