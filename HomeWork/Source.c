#define CRT_SECURE_NO_WARNIGS
#include <stdio.h>

int main(void)
{
	while (1)
	{
		int Input;
		int j = 0;
		int jari_8 = 1;
		int answer_8 = 0;
		int answer_16 = 0;

		printf("���� �Է�: ");
		printf("(�����Ϸ��� 0�� �Է��ϼ���)");
		scanf("%d", &Input);
		if (Input == 0)
			return 0;

		printf("������: ");

		//2���� �ڵ�
		for (int i = sizeof(Input) * 8 - 1; i >= 0; i--)
			printf("%d", (Input >> i & 1));

		//8���� �ڵ�
		for (int i = 0; i <= 10; i++)
		{
			answer_8 += ((Input >> 3 * i) & 7) * jari_8;
			jari_8 *= 10;
		}
		printf("\n������: %32d %8o\n", answer_8, Input);

		//16���� �ڵ�
		printf("16����: \t\t\t");
		for (int i = 7; answer_16 == 0; i--)
		{
			answer_16 = (Input >> 4 * i) & 15;
			j += 1; //answer_16�� 0�϶����� ����
		}

		for (int i = 0; i < j - 1; i++)
			printf(" ");

		for (int i = 7 - j + 1; i >= 0; i--)
		{
			answer_16 = (Input >> 4 * i) & 15;
			if (answer_16 < 10)
				printf("%d", answer_16);
			else
				printf("%c", answer_16 + 55);
		}

		printf(" %8X\n\n", Input);
	}

}


