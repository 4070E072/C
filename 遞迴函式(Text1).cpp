#include <stdio.h>
#include <stdlib.h>
#include "Text1.h"

int main(void)
{
	int n, r;
	printf("�п�Jn��:");
	scanf("%d",&n);
	r = tfact(n);
	printf("%d!���Ȭ�:%d\n",n,r);
	return 0;
}
