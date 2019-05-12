#include<stdio.h>
int main()
{
	int n,m;
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		int a[51][5];
		int m_sum[6]={0},n_sum[51]={0};
		int count=0;	//m_sum是学科的总分，n_sum是学生的总分 
		if(n>50||m>5)
			break;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				scanf("%d",&a[i][j]);
				n_sum[i]+=a[i][j];
				m_sum[j]+=a[i][j];
			}
		 }
		 
		for(int i=0;i<n;i++)
			if(n!=i+1)
				printf("%.2f ",1.0*n_sum[i]/m);
			else
				printf("%.2f\n",1.0*n_sum[i]/m); 
				
		for(int i=0;i<m;i++)
			if(m!=i+1)
				printf("%.2f ",1.0*m_sum[i]/n);
			else
				printf("%.2f\n",1.0*m_sum[i]/n);
		for(int i=0;i<n;i++)
		{
			int flag=0;
			for(int j=0;j<m;j++)
			{
				if(a[i][j]<1.0*m_sum[j]/n)
					flag=1;
			}
			if(flag==0)
				count++;
		 }
		 printf("%d\n\n",count); 
	}
	return 0;
 } 
