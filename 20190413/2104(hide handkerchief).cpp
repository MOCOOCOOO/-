//#include<stdio.h>
//int main()
//{
//	int n,m;
//	while(scanf("%d %d",&n,&m)!=EOF&&(n!=-1&&m!=-1))
//	{
//		int index=0;	//��¼��ǰ�����λ�� 
//		int flag[n];
//		flag[index]=1;	//���ȼ���0��λ�ã�������λ����1������λ�ö�Ϊ1֤��һ�������ҵ� 
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

//�����ڴ���� 

//�ж��������Ĺ�Լ��Ϊ1����Ա��� 
#include<stdio.h>
int gcd(int n,int m)	//����1����������Ϊ���������Լ��Ϊ1 
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

