#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"hello.h"

int main(void){
	int a=0,b=0,num=0;
	int x[4],y[4];
	RandNum(x);
	
	while(a!=4){
		InputNum(y);
		CompareXY(x,y,a,b);
		printf("%dA%dB\n",a,b);
		num++;
		if(a==4)printf("你贏了 你使用了%d次",num);
	}
	return 0;
}

void RandNum(int x[4]){
	for(int i=0;i<4;i++){
		int m=0,n=1;
		while(n==1){
			n=0;
			srand((unsigned)time(NULL));
			m=rand()%10;
			for(int j=0;j<i;j++){
				if(m==x[j]) n=1;
			}
		}
		x[i]=m;
	}
	return;
}
void InputNum(int y[4]){
	int m;
	printf("請輸入四個數:");
	scanf("%d",&m);
	for(int i=0;i<4;i++){
		y[i]=m%10;
		m=m/10;
	}
	return;
}
void CompareXY(int x[4],int y[4],int& a ,int& b){
	a=b=0;
	for(int i=0;i<4;i++){
		for(int j;j<4;j++){
			if(x[i]=y[j]){
				if(i==j)a++;
		else b++;
	}
}
}
}
