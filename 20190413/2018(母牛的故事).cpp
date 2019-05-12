#include<stdio.h>
int main()
{
	int n;
	int a[55];
	a[1]=1;
	a[2]=2;
	a[3]=3;
	a[4]=4;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)break;
		for(int i=5;i<=n;i++)
		{
			a[i]=a[i-1]+a[i-3];
		}
		printf("%d\n",a[n]);
	}
	return 0;
}
