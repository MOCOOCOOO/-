#include<stdio.h>
int main()
{
	int n;
	int getCount(int x);
	while(scanf("%d",&n))
	{
		int sum=0;
		if(n==0)
			break;
		for(int i=0;i<n;i++)
		{
			int money=0;
			scanf("%d",&money);
			sum+=getCount(money);
		}
		printf("%d\n",sum);	
	}
	return 0;
}

int getCount(int x)
{
	int sum=0;
	sum=x/100+x%100/50+x%100%50/10+x%100%50%10/5+x%100%50%10%5/2+x%100%50%10%5%2;
	return sum;
} 
