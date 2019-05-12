#include<stdio.h>
int main() 
{
	int a,b;
	scanf("%x %x",&a,&b);	//-A在电脑表示为FFFFFFFFFFFFFFF6，补码表示，取反加1 
	printf("%X\n",a+b);
	return 0;
}
