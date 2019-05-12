#include<stdio.h>
int main()
{
	char a[255];
	while(gets(a)&&a[0]!='#')
	{
		int sum=0;
		for(int i=0;a[i]!='\0';i++)
		{
			if(a[i]>='A'&&a[i]<='Z')
				sum+=(a[i]-64)*(i+1);
		}
		printf("%d\n",sum);
	}
	return 0;
 } 
