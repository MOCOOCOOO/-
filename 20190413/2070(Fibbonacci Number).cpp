#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		__int64 a[51]={0};
		a[0]=0;
		a[1]=1;
		if(n==-1)
			break;
		for(int i=2;i<=n;i++)
		{
			a[i]=a[i-1]+a[i-2];
		}
		printf("%lld\n",a[n]);
	}
	return 0;
}
