#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int count=0;
		int a;
		while(n--)
		{
			scanf("%d",&a);
			int flag=0; 
			for(int i=3;i<=sqrt(a);i=i+2)	//��ʼ�õ���i<=a/2���ᱨ��ʱ��Ӳ��Ҫ i<=sqrt(a)����ͨ�� 
			{
				if(a%2==0)
				{
					flag=1;
					break;
				}
				if(a%i==0)
				{
					flag=1;
					break;
				}
			}
			if(a==4)
				flag=1;
			if(flag==0)
				count++; 
		}
		printf("%d\n",count);
		
	}
	return 0;
}
