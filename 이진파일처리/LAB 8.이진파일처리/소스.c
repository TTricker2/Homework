#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
	FILE *binFile;
	int Number[50] = { 0, };

	for (int i = 0; i < 50; i++) 
	{
		Number[i] = i * 3;
	}

	if ((binFile = fopen("test.bin", "wb+")) == NULL) 
	{
		printf("파일이 안 열려요.\n");
		exit(1);
	}

	for (int i = 0; i < 50; i++) 
	{
		putw(Number[i], binFile);
	}

	rewind(binFile);

	for (int i = 0; i < 25; i++) 
	{
		printf("%d\n", getw(binFile));
		fseek(binFile, sizeof(int), SEEK_CUR);
		
	}
	
	printf("\n\n\n");

	return 0;
}