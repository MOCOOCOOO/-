#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int sum[31]={0};
		sum[0]=3;
		int a;
		scanf("%d",&a);
		for(int i=1;i<31;i++)
		{
			sum[i]=(sum[i-1]-1)*2;
		}
		printf("%d\n",sum[a]);
	}
	return 0;
}
