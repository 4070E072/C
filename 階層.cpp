#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a[20];
for (int i=0; i<=20; i++){
	a[0]=1;a[1]=2;a[2]=3*2*1;
	a[i]=(i+1)*a[i-1];
}
for (int i=0; i<20; i++){
	printf("%d\n",a[i]);
}
	return 0;
}
