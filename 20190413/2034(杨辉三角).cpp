#include<stdio.h>
int main()
{
	int n;
	int a[31][31]={0};
	while(scanf("%d",&n)!=EOF)
	{
//		a[31][31]={0};	这样赋值虽然在DEV-c++这里能正常编译运行，但是提交不通过，报语法错误，所以改用以下方法将数组赋值为0 
		for(int i=0;i<=30;i++)
		{
			for(int j=0;j<=i;j++)
			{
				a[i][j]=0;
			}
		}
		a[1][1]=1;
		for(int i=2;i<=n;i++)
		{
			for(int j=1;j<=i;j++)
			{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=i;j++)
			{
				if(j!=i)
					printf("%d ",a[i][j]);
				else
					printf("%d\n",a[i][j]);
			}
			if(i==n)
				printf("\n");
		}
	}
	return 0;
}
