#include<stdio.h>
int main()
{
	char a[100];
	while(gets(a))
	{
		int i=0;
		int index=0;
		while(a[i]!='\0')
		{
			if(a[i]>a[index])
			{
				index=i;
			}
			i++;
		}
		int j=0;
		while(a[j]!='\0')
		{
			if(a[j]==a[index])
				printf("%c(max)",a[j]);
			else
				printf("%c",a[j]);
			j++;
		}
		printf("\n");
	}
	return 0;
}
