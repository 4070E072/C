#include <stdio.h>
#include <stdlib.h>
#include "Text2.h"

int main(void)
{
	int n, r;
	printf("請輸入n值:");
	scanf("%d",&n);
	r = tfact(n);
	printf("費事數列第%d個值為:%d\n",n,r);
	return 0;
}
