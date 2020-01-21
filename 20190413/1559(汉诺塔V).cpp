#include<stdio.h>
int n,k;
__int64 hanoi(int x)
{
	if(x==k)
		return 1;
	return hanoi(x-1)*2;
}
int main()
{
	int m;
	scanf("%d",&m);
	while(m--)
	{
		scanf("%d %d",&n,&k);
		printf("%I64d\n",hanoi(n));
	}
	return 0;
} 

