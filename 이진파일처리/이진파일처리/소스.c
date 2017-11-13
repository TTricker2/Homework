#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct personscore
{
	char name[40];
	int mid;
	int fin;
};
typedef struct personscore pscore;

int main(void)
{
	char fname[] = "score.bin";

	FILE *fp = fopen(fname, "wb");
	if (fp == NULL)
	{
		printf("파일이 안열려요.\n");
		exit(1);
	}

	char line[60];
	int count = 0;
	pscore score;
	printf("이름과 성적(중간, 기말)을 입력하세요.\n");

	fgets(line, 60, stdin);
	while (!feof(stdin))
	{
		sscanf(line, "%s %d %d", score.name, &score.mid, &score.fin);
		fwrite(&score, sizeof(pscore), 1, fp);
		fgets(line, 60, stdin);
	}
	fclose(fp);

	if ((fp = fopen(fname, "rb") == NULL))
	{
		printf("파일이 안열려요.\n");
		exit(1);
	}
	printf("%8s%15s%10s\n", "이름", "중간", "기말");
	
	fread(&score, sizeof(pscore), 1, fp);
	while (!feof(fp))
	{
		fprintf(stdout, "%18s%8d%8d\n", score.name, score.mid, score.fin);
		fread(&score, sizeof(pscore), 1, fp);
	}

	fclose(fp);

	return 0;


}