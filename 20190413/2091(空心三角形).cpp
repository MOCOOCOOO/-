#include<stdio.h>
int main()
{
	char n;
	int m;
	int flag=0;
	while(~scanf("%c",&n)&&n!='@'&&~scanf("%d",&m))
	{
		getchar();
		if(flag!=0)
		{
			printf("\n");	//����������֮���ÿո��������Ȼ��ʾ��ʽ���� 
		}
		else
		{
			flag=1;
		}
		//��һ��
		if(m==1)
		{
			printf("%c\n",n);
		}
		else
		{
			for(int i=0;i<m-1;i++)
			{
				printf(" ");
			}
			printf("%c\n",n);
			//�ڶ��п�ʼ�������ڶ��� 
			for(int i=m-2,j=1;i>0;i--,j+=2)
			{
				int index_i=i;
				int index_j=j;
				while(index_i--)
				{
					printf(" ");
				}
				printf("%c",n);
				while(index_j--)
				{
					printf(" ");
				}
				printf("%c\n",n);
			}
			//���һ��
			for(int i=0;i<2*m-1;i++)
			{
				printf("%c",n);
			}
			printf("\n");
		}
	}
	return 0;
}
