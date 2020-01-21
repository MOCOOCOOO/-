//求总共的序列数，就是求所有可能的排列组合。3个塔，n个盘，排列组合就是n*n*n种情况 
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		long long int sum=1;
		int m; 
		scanf("%d",&m);
		for(int i=0;i<m;i++)
		{
			sum*=3;
		}
		printf("%lld\n",sum);
	}
	return 0;
} 
