#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a,b,c;
		int a1,b1,c1;
		int sum_a,sum_b,sum_c;
		scanf("%d %d %d %d %d %d",&a,&b,&c,&a1,&b1,&c1);
		int count=0;	//¼ÇÂ¼½øÎ»
		sum_c=(c+c1)%60;
		count=(c+c1)/60;
		sum_b=(b+b1)%60+count;
		count=(b+b1)/60;
		sum_a=(a+a1)+count;
		printf("%d %d %d\n",sum_a,sum_b,sum_c);
	} 
	return 0;
} 
