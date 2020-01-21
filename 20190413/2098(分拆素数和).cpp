#include <stdio.h>
int isprime(int n)
{
	if(n==1) return 0;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0) 
			return 0;
	}
	return 1;
}
int main()
{
	int n,sum=0;
	while(~scanf("%d",&n)&&n!=0)
	{
		for(int i=2;i<n/2;i++)
		{
			if(isprime(i)&&isprime(n-i)) 
				sum++;
		}
		printf("%d\n",sum);
		sum=0;
	}
	return 0;
}
