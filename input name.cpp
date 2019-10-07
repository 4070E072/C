#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char name[5][10];
	for(int i=0; i<5; i++){
		printf("請輸入第%d個名字:",i+1);
		scanf("%s",name[i]);
	}
	for(int i=0; i<5; i++){
		printf("你輸入第%d個名字:%s\n",i+1,name[i]);
	}
	printf("\n");
	
	return 0;
}

