#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		char a[10000];
		gets(a);
//		printf("%#x\n",a[0]);	//���������Ϊ0xffffff..,������Ϊ%x�������һ��int�����ͣ�������λȫ����1��������ffff
		int i=0,count=0;
		while(a[i]!='\0')
		{
			if(a[i]<0)
				count++;
			i++;
		 }
		 printf("%d\n",count/2);	//	unicode����ĺ���ռ�����ֽڣ�utf�ĺ���ռ�����ֽ� 
	}
	return 0;
}
