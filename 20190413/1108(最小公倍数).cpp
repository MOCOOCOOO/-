#include<stdio.h>
int main()
{
	int n,m;
	while(~scanf("%d %d",&n,&m))
	{
		int t;
		long long int sum=n*m;
		while(m!=0)
		{
			t=n%m;
			n=m;
			m=t;
		}
		// printf("最大公约数：%d，最小公倍数：%d\n",n,sum/n); 
		printf("%d\n",sum/n); 
	}
	return 0;
} 
