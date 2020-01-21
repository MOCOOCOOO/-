#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a;
		scanf("%d",&a);
		long long int f[40];
		f[0]=0;
		for(int i=1;i<=a;i++)
		{
			f[i]=3*f[i-1]+2;
		}
		printf("%lld\n",f[a-1]+2);
	}
	return 0;
} 
