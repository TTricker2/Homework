#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	printf("Line Calculator >>\n");

	if (strcmp(argv[1], "add") == 0)
	{
		int Sum = 0;
		Sum = atoi(argv[2]) + atoi(argv[3]);
		printf("%d", Sum);
	}
	else if (strcmp(argv[1], "sub") == 0)
	{
		int Sub = 0;
		Sub = atoi(argv[2]) - atoi(argv[3]);
		printf("%d", Sub);
	}
	else if (strcmp(argv[1], "mul") == 0)
	{
		int mul = 0;
		printf("%d", atoi(argv[2]) * atoi(argv[3]));
	}
	else if (strcmp(argv[1], "div") == 0)
	{
		int div = 0;
		printf("%d", atoi(argv[2]) / atoi(argv[3]));
	}
	else if (strcmp(argv[1], "quot") == 0)
	{
		printf("%d", atoi(argv[2]) / atoi(argv[3]));
	}
	else if (strcmp(argv[1], "remain") == 0)
	{
		printf("%d", atoi(argv[2]) % atoi(argv[3]));
	}
	else if (strcmp(argv[1], "abs") == 0)
	{
		printf("%d", abs(atoi(argv[2])));
	}
	else if (strcmp(argv[1], "rev") == 0)
	{
		printf("%d", atoi(argv[2])* (-1));
	}

	return 0;
}