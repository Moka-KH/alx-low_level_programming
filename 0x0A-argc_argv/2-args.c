#include <stdio.h>

/**
* main -> print all arguments it gets
* @argc: argc is a param
* @argv: array of a command line
* Return: 0 if successed
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
