#include<stdio.h>
#include<malloc.h>
int main()
{
	int m,n;
	while(scanf("%d %d",&n,&m))
	{
		if(m==0&&n==0)break;
		int *p=(int *)malloc((n+1)*sizeof(int));
		p[0]=m; 
		for(int i=1;i<n+1;i++)
		{
			scanf("%d",&p[i]);
			if(p[i]<p[i-1])
			{
				int temp=p[i];
				p[i]=p[i-1];
				p[i-1]=temp;
			}
		}
		for(int i=0;i<n+1;i++)
		{
			printf("%d",p[i]);
			if(i!=n)
				printf(" ");
			else 
				printf("\n");
		}
	}
	return 0;
 } 
