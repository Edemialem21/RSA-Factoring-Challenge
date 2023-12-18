#include "factors.h"

/**
 * main - main entry point
 * @argc: the number of count of the arguments
 * @argv: the arguments vectors
 * Return: always success
 */

int main(int argc, char *argv[])
{
	int number;
	char line[1024];
	const char *filepath = argv[1];
	FILE *file = fopen(filepath, "r");

	if (argc != 2)
	{
		printf("Usage: factors <file>\n");
		return (1);
	}
	if (file == NULL)
	{
		printf("Error: Can't open file %s\n", filepath);
		return (1);
	}

	while (fgets(line, sizeof(line), file) != NULL)
	{
		number = atoi(line);
		factorize(number);
	}
	fclose(file);
	return (0);
}
