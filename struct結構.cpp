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
	
	printf("請輸入學生的名字:");
	scanf("%s",student.name);
	printf("請輸入國文成績:");
	scanf("%d",&student.c);
	printf("請輸入英文成績:");
	scanf("%d",&student.e);
	printf("請輸入數學成績:");
	scanf("%d",&student.m);
	student.total =student.c+student.e+student.m;
	printf("總分:%d",student.total);
	
	return 0;
}
