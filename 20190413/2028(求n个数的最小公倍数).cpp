#include<stdio.h>
//���Լ�����󷨣�ŷ������㷨��շת���������������a��b�����Լ����a=kb+r,����gcd(a,b)=gcd(b,r)
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
 } 
 
int main()
{
	int n;
	int mul,a;
	while(scanf("%d",&n)!=EOF)
	{
		mul=1;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a);
			mul=a/gcd(a,mul)*mul;
		}
		printf("%d\n",mul);
	}
	return 0;
 } 
