#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		int sum=x%100+y%100;	//�տ�ʼ��ʱ�򲻾�ͷ�ԣ�ֱ������ӣ����֮��int������ˣ�����С��ҪС�ģ��Ȱ���ŪС 
		if(sum>=100)
		{
			sum=sum%100;
		}
		printf("%d\n",sum);
	 } 
	return 0;
 } 
