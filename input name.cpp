#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char name[5][10];
	for(int i=0; i<5; i++){
		printf("�п�J��%d�ӦW�r:",i+1);
		scanf("%s",name[i]);
	}
	for(int i=0; i<5; i++){
		printf("�A��J��%d�ӦW�r:%s\n",i+1,name[i]);
	}
	printf("\n");
	
	return 0;
}

