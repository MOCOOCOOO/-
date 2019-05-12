#include<stdio.h>
int main()
{
	long long n,m,v;	//由于题目所说的16进制数长度小于15位，所以换算成2进制位的话小于64（16*4）位，需用长整形。输出16进制数时，不能输出负数，若是负数必须转换一下。
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
