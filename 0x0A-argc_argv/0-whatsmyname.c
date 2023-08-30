#include <stdio.h>

/**
* main -> print its file name
* @argc: param
* @argv: array of a command line
* Return: 0 if successed
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
