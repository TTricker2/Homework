#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char * reverse(char * str1);
char * encrypt(char * str1, int n);
char * rotate(char * str1, int n);

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

	while (gets(Sentence))
	{
		while (Sentence[count])
			count++;

		for (int i = 0; i < count; i++)
		{
			if (Sentence[i] < 65 || Sentence[i] > 122 || (Sentence[i] > 90 && Sentence[i] < 97))
			{
				printf("문자열만 입력해주세요\n");
				break;
			}
		}
	}

	printf("얼마나 Encryt하실 건가요?: ");
	scanf("%d", &Encrypt_num);
	printf("얼마나 rotate 하실 건가요?: ");
	scanf("%d", &Rotate_num); // 함수 내에서 rotate_num만큼 for문을 돌린다.

	printf("String Entered: \t");
	puts(Sentence);

	printf("Reversed: \t\t");
	reverse(Sentence);
	puts(Sentence);
	reverse(Sentence); // 배열 원래대로 복원하기

	printf("Encrypted: \t\t");
	encrypt(Sentence, Encrypt_num);
	puts(Sentence);
	encrypt(Sentence, -Encrypt_num);//원래대로 배열 돌리기

	printf("Rotated: \t\t");
	rotate(Sentence, Rotate_num);
	puts(Sentence);

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
	//65~90 대문자, 97~122 소문자
	for (int i = 0; i < count; i++)
	{
		if (*(str1 + i) >= 65 && *(str1 + i) <= 90)
			*(str1 + i) += n;
		else if (*(str1 + i) >= 97 && *(str1 + i) <= 122)
			*(str1 + i) += n;
		else
			break;
	}

	return str1;
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


