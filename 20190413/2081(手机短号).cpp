#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		char a[12];
		gets(a);
		printf("6%s\n",a+6);
	}
	return 0;
}
