//#include<stdio.h>
//int main()
//{
//	int n,m;
//	while(scanf("%d %d",&n,&m)!=EOF&&(n!=-1&&m!=-1))
//	{
//		int index=0;	//记录当前检查点的位置 
//		int flag[n];
//		flag[index]=1;	//首先检查第0个位置，检查过的位置置1，所有位置都为1证明一定可以找到 
//		for(int i=0;i<n;i++)
//		{
//			index=(index+m-1)%n; 
//			flag[index]=1; 
//		}
//		for(int i=0;i<n;i++)
//		{
//			if(flag[i]!=1)
//			{
//				printf("POOR Haha\n");
//				break;
//			}
//			else if(i==n-1)printf("YES\n");
//		}
//	}
//	return 0;
//}

//超出内存错误 

//判断两个数的公约数为1则可以遍历 
#include<stdio.h>
int gcd(int n,int m)	//返回1则两个数互为质数，最大公约数为1 
{
	int r;
	while(m)
	{
		r=n%m;
		n=m;
		m=r;
	}
	return n;
}
 
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m)&&n!=-1||m!=-1)
	{
		if(gcd(n,m)==1)
		   printf("YES\n");
		else
		   printf("POOR Haha\n");
	}
	return 0;
}

