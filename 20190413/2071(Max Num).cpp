#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int m;
		float a[100];
		float max=0;
		scanf("%d",&m);
		for(int i=0;i<m;i++)
		{
			scanf("%f",&a[i]);
			if(a[i]>max)
			{
				max=a[i];
			}
		}
		printf("%.2f\n",max);
	} 
	return 0;
} 
