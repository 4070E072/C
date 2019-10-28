#include <stdio.h>
#include <stdlib.h>
#include "Text1.h"

int main(void)
{
	int n, r;
	printf("請輸入n值:");
	scanf("%d",&n);
	r = tfact(n);
	printf("%d!的值為:%d\n",n,r);
	return 0;
}
