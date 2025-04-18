#include <stdio.h>
#include <stdlib.h>

void PrintHelp(char program_name []);

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		PrintHelp(argv[0]);
		return 1;
	}

	for(i=1; i<argc; ++i)
	{
		sum += atoi(argv[i]);
	}

	printf("Total sum: %i\n", sum);
	return 0;
}

void PrintHelp(char program_name [])
{
	printf("%s integer ...\n", program_name);
	printf("This program takes any number of integer values and sum them up.\n");

}
