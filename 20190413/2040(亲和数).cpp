#include<stdio.h>
#include<math.h>
int comment_sum(int a)	//求真约数之和 
{
	int sum=0;
	for(int i=1;i<=a/2;i++)
	{
		if(a%i==0)
		{
			sum+=i;
		//	printf("%d ",i);
		}
	}
//	printf("\n"); 
	return sum;
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
	//	printf("comment_sum(a)==%d\n",comment_sum(a));
		if(comment_sum(a)==b&&comment_sum(b)==a)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
} 
