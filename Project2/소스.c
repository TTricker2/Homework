#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct date
{
	int year;
	int month;
	int day;
};

struct PersonalStat
{
	char name[20];
	struct date open;
	char gender[5];
	char address[30];
	char PhoneNum[11];
};
typedef struct PersonalStat PersonalStat;

int main(void)
{
	PersonalStat Person[10];
	int i = 0;

	printf("������ �Է��ϼ���: \n");

	printf("�̸�:");
	scanf("%s", Person[i].name);
	fflush(stdin);
	printf("�������:");
	scanf("%d %d %d", &Person[i].open.year, &Person[i].open.month, &Person[i].open.day);
	fflush(stdin);
	printf("����:");
	scanf("%s", Person[i].gender);
	fflush(stdin);
	printf("�ּ�:");
	scanf("%s", Person[i].address);
	fflush(stdin);
	printf("��ȭ��ȣ:");
	scanf("%s", Person[i].PhoneNum);



	printf("\n\n�̸�\t\t��¥\t\t����\t�ּ�\t\t��ȭ��ȣ\n");
	printf("%s\t\t[%d, %d, %d]\t%s\t%s\t%s\n\n", Person[i].name, Person[i].open.year, Person[i].open.month, Person[i].open.day, Person[i].gender, Person[i].address, Person[i].PhoneNum);

	printf("\n\n�̸�: %s\n", Person[i].name);
	printf("��¥:[%d %d %d]\n", Person[i].open.year, Person[i].open.month, Person[i].open.day);
	printf("����: %s\n", Person[i].gender);
	printf("�ּ�: %s\n", Person[i].address);
	printf("��ȭ��ȣ: %s\n\n", Person[i].PhoneNum);

	system("pause");
	return 0;
}