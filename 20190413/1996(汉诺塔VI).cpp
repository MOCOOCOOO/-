//���ܹ��������������������п��ܵ�������ϡ�3������n���̣�������Ͼ���n*n*n����� 
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
