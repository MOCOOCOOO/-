#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		getchar();
		char *color[1000]={NULL};
		char temp[1000][16];	//֮ǰ��temp[16]һֱ����������color[j]=temp��ֵ����temp�ĵ�ַ����tempÿ�ζ���ı䣬�������е�color[i]����ı� 
		int count[1000]={0};
		for(int i=0;i<n;i++)
		{
			gets(temp[i]);
			int j=0;
			int flag=0;	//��־λ������������ֹ����ַ�����Ϊ1 
			while(color[j]!=NULL)
			{
				if(0==strcmp(color[j],temp[i]))
				{
					flag=0; 
					count[j]++;
				}
				j++;
			}
			if(flag==0)	//����û�г��ֹ����ַ�������¼���ַ��� 
			{
				color[j]=temp[i];
			}
		}
		//�Ƚ�count�õ����ִ��������ַ���λ��
		int max=0,index=0;
		for(int k=0;k<1000;k++)
		{
			if(count[k]>max)
			{
				
				max=count[k];
				index=k;
			}
		}
		printf("%s\n",color[index]); 
	}
	return 0;
 } 
