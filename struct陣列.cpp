#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct data{
		char name[10];
		int score[3];
		int total=0;
}student;

printf("�п�J�ǥͪ��W�r:");
	scanf("%s",student.name);
	printf("�п�J��妨�Z:");
	scanf("%d",&student.score[0]);
	printf("�п�J�^�妨�Z:");
	scanf("%d",&student.score[1]);
	printf("�п�J�ƾǦ��Z:");
	scanf("%d",&student.score[2]);
	
	for(int i=0; i<3; i++){
		student.total += student.score[i];
	}
	
	printf("�ǥͩm�W%s\n��妨�Z%d\n�^�妨�Z%d\n�ƾǦ��Z%d\n�`��%d", student.name, student.score[0], student.score[1], student.score[2], student.total);
	printf("\n");
	
	return 0;
}
