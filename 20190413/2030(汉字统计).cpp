#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		char a[10000];
		gets(a);
//		printf("%#x\n",a[0]);	//负数的输出为0xffffff..,这是因为%x输出的是一个int的类型，负数高位全部补1，所以有ffff
		int i=0,count=0;
		while(a[i]!='\0')
		{
			if(a[i]<0)
				count++;
			i++;
		 }
		 printf("%d\n",count/2);	//	unicode编码的汉字占两个字节，utf的汉字占三个字节 
	}
	return 0;
}
