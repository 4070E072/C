#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int A[30];
	
	A[0]=0;
	A[1]=1;
	for(int i=0; i<28; i++){
		A[i+2]=A[i]+A[i+1];
	}
	

	for(int i=0;i<30; i++){
		printf("%d\n",A[i]);
	} 
	return 0;
}
