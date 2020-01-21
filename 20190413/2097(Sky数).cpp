#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			break;
		int sum=n%10+n/10%10+n/100%10+n/1000%10;
		if(sum!=n%16+n/16%16+n/16/16%16+n/16/16/16%16)
			printf("%d is not a Sky Number.\n",n);
		else if(sum!=n%12+n/12%12+n/12/12%12+n/12/12/12%12)
			printf("%d is not a Sky Number.\n",n);
		else
			printf("%d is a Sky Number.\n",n);
	}
	return 0;
 } 
