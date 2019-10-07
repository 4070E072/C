#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int A[10];
	
	for(int i=0; i<10; i++){
		printf("請輸入第%個數:",i+1);
		scanf("%d",&A[i]);
	}
	
	printf("你輸入的值:");
	for(int i=0; i<10; i++){
		printf("%d,",A[i]);
	}
	return 0;
}
