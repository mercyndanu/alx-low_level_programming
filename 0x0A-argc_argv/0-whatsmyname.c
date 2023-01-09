#include <stdio.h>
/**
 * main - prints its name, followed by a new line
 * @argv: arguments
 * @argc: argument count
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
