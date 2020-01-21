#include<stdio.h>
int main()
{
	int n,m;
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		if(n==0&&m==0)
			break;
		n=n*100;
		int flag=0;
		for(int i=0;i<100;i++)
		{
			if((n+i)%m==0)
			{
				if(flag!=0)
					printf(" ");
				printf("%02d",i);
				flag=1;
			}
		}
		printf("\n");
	}
	return 0;
}
