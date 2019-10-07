#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int A[10];
	int sum =0;
	
	for(int i=0; i<10; i++){
		printf("請輸入第%d個數:",i+1);
		scanf("%d",&A[i]);
		sum += A[i];
	}
	
	printf("你輸入的值:%d", sum);
	return 0;
}

