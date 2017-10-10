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

	printf("정보를 입력하세요: \n");

	printf("이름:");
	scanf("%s", Person[i].name);
	fflush(stdin);
	printf("생년월일:");
	scanf("%d %d %d", &Person[i].open.year, &Person[i].open.month, &Person[i].open.day);
	fflush(stdin);
	printf("성별:");
	scanf("%s", Person[i].gender);
	fflush(stdin);
	printf("주소:");
	scanf("%s", Person[i].address);
	fflush(stdin);
	printf("전화번호:");
	scanf("%s", Person[i].PhoneNum);



	printf("\n\n이름\t\t날짜\t\t성별\t주소\t\t전화번호\n");
	printf("%s\t\t[%d, %d, %d]\t%s\t%s\t%s\n\n", Person[i].name, Person[i].open.year, Person[i].open.month, Person[i].open.day, Person[i].gender, Person[i].address, Person[i].PhoneNum);

	printf("\n\n이름: %s\n", Person[i].name);
	printf("날짜:[%d %d %d]\n", Person[i].open.year, Person[i].open.month, Person[i].open.day);
	printf("성별: %s\n", Person[i].gender);
	printf("주소: %s\n", Person[i].address);
	printf("전화번호: %s\n\n", Person[i].PhoneNum);

	system("pause");
	return 0;
}