#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)&&n!=0)
	{
		if(n<0)
		{
			printf("0\n");
			continue;
		}
		int a;
		int sum=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a);
			sum+=a;
		}
		printf("%d\n",sum);
	}
	return 0;
}
