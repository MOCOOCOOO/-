#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		long long int f[40];
		f[0]=0;
		for(int i=1;i<=n;i++)
		{
			f[i]=3*f[i-1]+2;
		}
		printf("%lld\n",f[n]);
	}
	return 0;
} 
