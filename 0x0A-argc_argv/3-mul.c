#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argv: arguments
 * @argc: argument count
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int c, v;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	v = atoi(argv[2]);

	printf("%d\n", c * v);
	return (0);
}
