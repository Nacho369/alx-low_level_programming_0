#include <stdio.h>
#include "main.h"

/**
 * main - Entry point for program
 *
 * @argc: Argument count of main function
 * @argv: Array of strings of argument passed
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
