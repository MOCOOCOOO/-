#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n>0)
	{
		n--;
		int a,m;
		int sum=0;
		scanf("%d",&m);
		for(int i=0;i<m;i++)
		{
			scanf("%d",&a);
			sum+=a;
		}
		printf("%d\n",sum);
		if(n!=0)
			printf("\n");
	}
	return 0;
}
