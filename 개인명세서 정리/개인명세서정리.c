#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct date
{
	int year;
	int month;
	int day;
};

typedef struct PersonalStat
{
	char name[20];
	struct date open;
	char gender[5];
	char address[30];
	char PhoneNum[11];
}PersonalStat;

void name_sort(PersonalStat * name, int count);
void date_sort(PersonalStat * date, int count);

int main(void)
{
	PersonalStat Person[10];
	int i = 0;
	int count;
	printf("입력할 사람의 수를 입력하세요(최소 5명, 최대 10명):");

	while (1)
	{
		scanf("%d", &count);

		if (count > 10 || count < 5)
		{
			printf("입력할 사람의 수를 입력하세요(최소 5명, 최대 10명):");
			continue;
		}
		else
			break;
	}


	while (i < count)
	{
		printf("<%d번째 사람 입력>\n", i + 1);
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
		gets(Person[i].address);
		fflush(stdin);
		printf("전화번호:");
		scanf("%s", Person[i].PhoneNum);

		printf("\n");
		i++;
	}

	printf("<입력자료 그대로 출력>\n");
	printf("이름\t생년월일\t성별\t주소\t\t\t\t전화번호\n");
	for (int k = 0; k < count; k++)
		printf("%3s \t[%d %d %d]\t%s\t%-30s\t%s\n", Person[k].name, Person[k].open.year, Person[k].open.month,
			Person[k].open.day, Person[k].gender, Person[k].address, Person[k].PhoneNum);

	printf("\n\n\n\n");
	printf("<이름 내림차순 출력>\n");
	name_sort(Person, count);
	printf("이름\t생년월일\t성별\t주소\t\t\t\t전화번호\n");
	for (int k = 0; k < count; k++)
		printf("%3s \t[%d %d %d]\t%s\t%-30s\t%s\n", Person[k].name, Person[k].open.year, Person[k].open.month,
			Person[k].open.day, Person[k].gender, Person[k].address, Person[k].PhoneNum);


	printf("\n\n\n\n");
	printf("<생년월일 오름차순 출력>\n");
	date_sort(Person, count);
	printf("이름\t생년월일\t성별\t주소\t\t\t\t전화번호\n");
	for (int k = 0; k < count; k++)
		printf("%3s \t[%d %d %d]\t%s\t%-30s\t%s\n", Person[k].name, Person[k].open.year, Person[k].open.month,
			Person[k].open.day, Person[k].gender, Person[k].address, Person[k].PhoneNum);




	return 0;
}

void name_sort(PersonalStat * person, int count)
{
	//이름 내림차순 정렬 
	for (int x = 0; x<count - 1; x++)
	{
		for (int y = x + 1; y<count; y++)
		{
			if (strcmp(person[x].name, person[y].name)<0)
			{
				PersonalStat temp;
				temp = person[x];
				person[x] = person[y];
				person[y] = temp;
			}
		}
	}
}

void date_sort(PersonalStat * date, int count)
{
	//생년월일 오름차순 
	for (int x = 0; x<count; x++)
	{
		for (int y = x + 1; y<count; y++)
		{
			int size1 = (date[x].open.year) * 10000 + (date[x].open.month) * 100 + (date[x].open.day);
			int size2 = (date[y].open.year) * 10000 + (date[y].open.month) * 100 + (date[y].open.day);
			if (size1 > size2)
			{
				PersonalStat Temp;
				Temp = date[x];
				date[x] = date[y];
				date[y] = Temp;
			}
		}
	}
}

