#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct data{
		char name[10];
		int c;
		int e;
		int m;
		int total=0;
	};
	data student;
	
	printf("�п�J�ǥͪ��W�r:");
	scanf("%s",student.name);
	printf("�п�J��妨�Z:");
	scanf("%d",&student.c);
	printf("�п�J�^�妨�Z:");
	scanf("%d",&student.e);
	printf("�п�J�ƾǦ��Z:");
	scanf("%d",&student.m);
	student.total =student.c+student.e+student.m;
	printf("�`��:%d",student.total);
	
	return 0;
}
