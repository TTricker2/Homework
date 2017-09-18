#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void AddArray1(int ptr1[], int ptr2[], int ptr3[]);
void AddArray2(int ptr1[], int ptr2[], int ptr3[]);
void MultipleArray1(int ptr1[][3], int ptr2[][3], int ptr3[][3]);
void MultipleArray2(int ptr1[][3], int ptr2[][3], int ptr3[][3]);
void ShowResultArray(int ptr[][3]);

int main(void)
{

	int array1[3][3];
	int array2[3][3];
	int ResultArray[3][3] = { 0, };

	printf("array1\n");
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{	
			printf("%d�� %d�� �����Է�: ", i+1, j+1);
			scanf("%d", &array1[i][j]);
		}
	}

	printf("array2 �����Է�: \n");
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			printf("%d�� %d�� �����Է�: ", i + 1, j + 1);
			scanf("%d", &array2[i][j]);
		}
	}

	//��ºκ�
	printf("array1: \n");
	ShowResultArray(array1);
	printf("array2: \n");
	ShowResultArray(array2);

	AddArray1(array1, array2, ResultArray);
	printf("�ε��� �����\n");
	ShowResultArray(ResultArray);

	AddArray2(array1, array2, ResultArray);
	printf("������ ����� \n");
	ShowResultArray(ResultArray);

	MultipleArray1(array1, array2, ResultArray);
	printf("�ε��� ��İ� \n");
	ShowResultArray(ResultArray);

	MultipleArray2(array1, array2, ResultArray);
	printf("������ ��İ� \n");
	ShowResultArray(ResultArray);

	return 0;
}


void AddArray1(int ptr1[], int ptr2[], int ptr3[])
{
	for (int i = 0; i < 9; i++)
		ptr3[i] = ptr1[i] + ptr2[i];
}

void AddArray2(int ptr1[], int ptr2[], int ptr3[])
{
	for (int i = 0; i < 9; i++)
		*(ptr3 + i) = *(ptr1 + i) + *(ptr2 + i);
}

void MultipleArray1(int ptr1[][3], int ptr2[][3], int ptr3[][3])
{
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			ptr3[i][j] = 0;
			for (int k = 0; k<3; k++)
				ptr3[i][j] += ptr1[i][k] * ptr2[k][j];
		}
	}
}

void MultipleArray2(int ptr1[][3], int ptr2[][3], int ptr3[][3])
{
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			*(*(ptr3 + i) + j) = 0;
			for (int k = 0; k < 3; k++)
				*(*(ptr3 + i) + j) += *(*(ptr1 + i) + k) * *(*(ptr2 + k) + j);
		}
	}
}

void ShowResultArray(int ptr[][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%4d", ptr[i][j]);
		printf("\n");
	}
	printf("\n");
}