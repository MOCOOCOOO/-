#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int count=0;
		int a;
		while(n--)
		{
			scanf("%d",&a);
			int flag=0; 
			for(int i=3;i<=sqrt(a);i=i+2)	//开始用的是i<=a/2，会报超时，硬是要 i<=sqrt(a)才能通过 
			{
				if(a%2==0)
				{
					flag=1;
					break;
				}
				if(a%i==0)
				{
					flag=1;
					break;
				}
			}
			if(a==4)
				flag=1;
			if(flag==0)
				count++; 
		}
		printf("%d\n",count);
		
	}
	return 0;
}
