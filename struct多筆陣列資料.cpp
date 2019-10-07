#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct data{
		char name[10];
		int score[3];
		int total=0;
}student[3];

for(int i=0; i<3; i++){
	
printf("請輸入學生的名字:");
	scanf("%s",student[i].name);
	printf("請輸入國文成績:");
	scanf("%d",&student[i].score[0]);
	printf("請輸入英文成績:");
	scanf("%d",&student[i].score[1]);
	printf("請輸入數學成績:");
	scanf("%d",&student[i].score[2]);
	
	for(int j=0; j<3; j++){
		student[i].total += student[i].score[j];
	}

	printf("學生姓名%s\n國文成績%d\n英文成績%d\n數學成績%d\n總分%d", student[i].name, student[i].score[0], student[i].score[1], student[i].score[2], student[i].total);
	printf("\n");
}
	
	return 0;

}
