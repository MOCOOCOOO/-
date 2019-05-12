#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		char a[100];
		gets(a);
		int i=1;
		if(!((a[0]=='_')||(a[0]<='z'&&a[0]>='a')||(a[0]<='Z'&&a[0]>='A')))
		{
			printf("no\n");
			continue;
		}	
		while(a[i]!='\0')
		{
			if(!((a[i]=='_')||(a[i]<='z'&&a[i]>='a')||(a[i]<='Z'&&a[i]>='A')||(a[i]>='0'&&a[i]<='9')))
			{
				printf("no\n");
				break;
			}
			i++;
		}
		if(a[i]=='\0')
			printf("yes\n");
	}
	return 0;
}
