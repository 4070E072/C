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
	
printf("�п�J�ǥͪ��W�r:");
	scanf("%s",student[i].name);
	printf("�п�J��妨�Z:");
	scanf("%d",&student[i].score[0]);
	printf("�п�J�^�妨�Z:");
	scanf("%d",&student[i].score[1]);
	printf("�п�J�ƾǦ��Z:");
	scanf("%d",&student[i].score[2]);
	
	for(int j=0; j<3; j++){
		student[i].total += student[i].score[j];
	}

	printf("�ǥͩm�W%s\n��妨�Z%d\n�^�妨�Z%d\n�ƾǦ��Z%d\n�`��%d", student[i].name, student[i].score[0], student[i].score[1], student[i].score[2], student[i].total);
	printf("\n");
}
	
	return 0;

}
