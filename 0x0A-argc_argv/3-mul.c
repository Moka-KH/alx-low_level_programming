#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: num of command line arguments
 * @argv: array contains the program command line arguments
 * Return: 0 if successed
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
