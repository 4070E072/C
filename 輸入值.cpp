#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int A[10];
	
	for(int i=0; i<10; i++){
		printf("�п�J��%�Ӽ�:",i+1);
		scanf("%d",&A[i]);
	}
	
	printf("�A��J����:");
	for(int i=0; i<10; i++){
		printf("%d,",A[i]);
	}
	return 0;
}
