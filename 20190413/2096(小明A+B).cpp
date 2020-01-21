#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		int sum=x%100+y%100;	//刚开始的时候不经头脑，直接先相加，相加之后int就溢出了，处理小数要小心，先把数弄小 
		if(sum>=100)
		{
			sum=sum%100;
		}
		printf("%d\n",sum);
	 } 
	return 0;
 } 
