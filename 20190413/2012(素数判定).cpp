#include<stdio.h>
#include<math.h>
int main()
{
	int x,y;
	int is_prime_number(int x); 
	while(scanf("%d %d",&x,&y)!=EOF)
	{
		int flag=0;
		if(x==0&&y==0)break;
		for(int i=x;i<=y;i++)
		{
			if(is_prime_number(i*i+i+41)==1)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("OK\n");
		else
			printf("Sorry\n");
	}
	return 0;
}

int is_prime_number(int x)	//判断是否是素数，是素数返回0 
{
	for(int i=3;i<=sqrt(x);i+=2)
	{
		if(x%i==0)return 1;
	}
	return 0;
 } 
