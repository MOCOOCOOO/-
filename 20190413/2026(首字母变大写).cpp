#include<stdio.h>
int main()
{
	char a[100];
	while(gets(a))
	{
		a[0]=a[0]-'a'+'A';
		int i=1;
		while(a[i]!='\0')
		{
			if(a[i-1]==' '&&a[i]>='a'&&a[i]<='z')
			{
				a[i]=a[i]-'a'+'A';
			}
			i++;
		}
		printf("%s\n",a); 
	}
	return 0;
 } 
