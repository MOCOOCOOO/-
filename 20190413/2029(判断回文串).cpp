#include<stdio.h>
#include<string.h> 
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		char a[1000];
		gets(a);
		int i=0;
		while(a[i]!='\0')
		{
			i++;
			if(a[i]!=a[strlen(a)-i-1])
				break;
		}
		if(i==strlen(a))
			printf("yes\n");
		else 
			printf("no\n");
	}
	return 0;
}
