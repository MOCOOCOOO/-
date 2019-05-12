#include<stdio.h>
int main()
{
	long int a,b;
	while(~scanf("%ld %ld",&a,&b))
	{
		int i=0;
		char result[1000];
		if(a<0)
		{
			printf("-");
			a=-1*a;
		}
		if(a==0)
		{
			result[i++]='0';
		}
		while(a!=0)
		{
			if(a!=0)
			{
				if(a%b<9)
					result[i++]=a%b+'0';
				else
				{
					result[i++]=a%b+'A'-10;
				}
				a=a/b;
			}
			else
				break;
		}
		for(int j=i-1;j>=0;j--)
		{
			printf("%c",result[j]);
			if(j==0)
				printf("\n");
		}
	} 
} 
