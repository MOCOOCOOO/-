#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)break;
		int a[100];
		scanf("%d",&a[0]);
		int min=a[0],index=0;	//index记录最小值的下标位置，min记录最小值 
		for(int i=1;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]<min)
			{
				min=a[i];
				index=i;
			}
		}
		printf("%d",min);
		for(int i=1;i<n;i++)
		{
			if(i==index)
				printf(" %d",a[0]);
			else
				printf(" %d",a[i]);
		}
		printf("\n"); 
	}
	return 0;
 } 
