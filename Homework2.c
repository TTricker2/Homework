#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char * reverse(char * str1);
char * encrypt(char * str1, int n);
char * rotate(char * str1, int n);
int CheckRange(char str1, int n);

int main(void)
{
	char Sentence[101];
	int count = 0;
	int Encrypt = 0;
	int Encrypt_num;
	int Rotate = 0;
	int Rotate_num;

	printf("입력 종료를 원하면 새로운 행에서 ctrl+z 입력\n");
	printf("Enter String(more than 20 chars): ");

	gets(Sentence);

	printf("얼마나 Encrypt하실 건가요?: ");
	scanf("%d", &Encrypt_num);
	printf("얼마나 rotate 하실 건가요?: ");
	scanf("%d", &Rotate_num);

	printf("\nString Entered: \t");
	puts(Sentence);

	printf("Reversed: \t\t");
	reverse(Sentence);
	puts(Sentence);
	reverse(Sentence); // 배열 원래대로 복원하기

	printf("Encrypted: \t\t");
	encrypt(Sentence, Encrypt_num);
	puts(Sentence);
	encrypt(Sentence, -Encrypt_num); //원래대로 배열 돌리기

	printf("Rotated: \t\t");
	rotate(Sentence, Rotate_num);
	puts(Sentence);
	printf("\n");

	return 0;
}

char * reverse(char * str1)
{
	char temp = 0;
	int count = 0;

	while (*(str1 + count))
		count++;

	for (int i = 0; i < (count / 2); i++)
	{
		temp = *(str1 + i);
		*(str1 + i) = *(str1 + (count - 1) - i);
		*(str1 + (count - 1) - i) = temp;
	}

	return str1;
}

char * encrypt(char * str1, int n)
{
	int count = 0;

	while (*(str1 + count))
		count++;

	for (int i = 0; i < count; i++)
	{
		int check1 = CheckRange(str1[i], 0);
		int check2;

		if (n > 26 || n < -26) //연산을 하면 알파벳 범위를 벗어나는 값들의 범위 
			n %= 26;

		if (check1) // 알파벳만을 입력했을 때를 가정한다. 
		{

			check2 = CheckRange(str1[i], n);
			if (check1 == check2)
				*(str1 + i) += n;
			else
			{
				if (n > 0)
					*(str1 + i) = *(str1 + i) + n - 26;
				else
					*(str1 + i) = *(str1 + i) + n + 26;
			}
		}
	}
	return str1;
}

int CheckRange(char str1, int n) // 알파벳이 아닌 경우에만 0을 반환한다. 
{
	if (str1 + n >= 65 && str1 + n <= 90)
		return 1;
	else if (str1 + n >= 97 && str1 + n <= 122)
		return 2;
	else
		return 0;
}

char * rotate(char * str1, int n)
{
	int count = 0;

	while (*(str1 + count))
		count++;

	for (int i = 0; i < n; i++) // rotate 횟수
	{
		int temp = *(str1 + (count - 1)); // 배열원소 왼쪽으로 1칸씩 이동

		for (int j = count - 1; j > 0; j--)
		{
			*(str1 + j) = *(str1 + (j - 1));
		}

		*(str1 + 0) = temp;
	}

	return str1;
}