#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int A[10];
	int sum =0;
	
	for(int i=0; i<10; i++){
		printf("�п�J��%d�Ӽ�:",i+1);
		scanf("%d",&A[i]);
		sum += A[i];
	}
	
	printf("�A��J����:%d", sum);
	return 0;
}

