#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void AddArray1(int ptr1[][3], int ptr2[][3]);
void AddArray2(int ptr1[][3], int ptr2[][3]);
void MultipleArray1(int ptr1[][3], int ptr2[][3]);
void MultipleArray2(int ptr1[][3], int ptr2[][3]);

int main(void)
{

	int array1[3][3];
	int array2[3][3];

	printf("array1\n");
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{	
			printf("%d행 %d열 원소입력: ", i+1, j+1);
			scanf("%d", &array1[i][j]);
		}
			
	}

	printf("array2 원소입력: \n");
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			printf("%d행 %d열 원소입력: ", i + 1, j + 1);
			scanf("%d", &array2[i][j]);
		}
			
	}

	AddArray1(array1, array2);
	AddArray2(array1, array2);
	MultipleArray1(array1, array2);
	MultipleArray2(array1, array2);
	return 0;
}

void AddArray1(int ptr1[][3], int ptr2[][3])
{
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			printf("%4d", ptr1[i][j] + ptr2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void AddArray2(int ptr1[][3], int ptr2[][3])
{
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			printf("%4d", *(*(ptr1 + i) + j) + *(*(ptr2 + i) + j));
		}
		printf("\n");
	}
	printf("\n");
}

void MultipleArray1(int ptr1[][3], int ptr2[][3])
{
	int ptr3[3][3] = { 0, };
	int sum = 0;
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			sum = 0;
			for (int k = 0; k<3; k++)
			{
				 sum += ptr1[i][k] * ptr2[k][j];
			}
			ptr3[i][j] = sum;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%4d", ptr3[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void MultipleArray2(int ptr1[][3], int ptr2[][3])
{
	int ptr3[3][3] = { 0, };
	int sum = 0;
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			sum = 0;
			for (int k = 0; k < 3; k++)
			{
				sum += *(*(ptr1 + i) + k) * *(*(ptr2 + k) + j);
			}
			ptr3[i][j] = sum;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%4d", ptr3[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}