#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct data{
		char name[10];
		int score[3];
		int total=0;
}student;

printf("請輸入學生的名字:");
	scanf("%s",student.name);
	printf("請輸入國文成績:");
	scanf("%d",&student.score[0]);
	printf("請輸入英文成績:");
	scanf("%d",&student.score[1]);
	printf("請輸入數學成績:");
	scanf("%d",&student.score[2]);
	
	for(int i=0; i<3; i++){
		student.total += student.score[i];
	}
	
	printf("學生姓名%s\n國文成績%d\n英文成績%d\n數學成績%d\n總分%d", student.name, student.score[0], student.score[1], student.score[2], student.total);
	printf("\n");
	
	return 0;
}
