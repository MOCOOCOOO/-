#include<stdio.h>
int main()
{
	long long n,m,v;	//������Ŀ��˵��16����������С��15λ�����Ի����2����λ�Ļ�С��64��16*4��λ�����ó����Ρ����16������ʱ������������������Ǹ�������ת��һ�¡�
	while(scanf("%llx%llx",&n,&m)==2)
	{
		v=n+m;
		if(v<0)
		{
			v=-v;
			printf("-%llX\n",v);	
		}
		else
		printf("%llX\n",v);	
	}  
     return 0;
 }
