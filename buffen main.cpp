#include <stdio.h>
#include <stdlib.h>
#include "buffer.h"

int main(){
	int buffer[20],top=0,value,x=0;
	while(x!=3){
		printf("1. push, 2. pull, 3. finsh\n");
		scanf("%d",&x);
		if(x==1){
			printf("push the value:");
			scanf("%d", &value);
			if(push(buffer,value,top)==-1)
			printf("the buffer is full\n");
		}
		else if(x==2){
			if(pull(buffer,value,top)==-1)
				printf("the buffer is empty\n");
			else
				printf("the pull value is %d\n",value);
			
		}
	}
	return 1;
}
int push(int buffer[20], int value, int&top){
	if(top==20)return -1;
	buffer[top]=value;
	top++;
	return 1;
}
int pull(int buffer[20], int& value, int& top){
	if (top==0) return -1;
	top--;
	value = buffer[top];
	return 1;
}


