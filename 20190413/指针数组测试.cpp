#include<stdio.h>
int main()
{
	char *a[5];
	char temp[20];
	//scanf("%s",temp); 
	for(int i=0;i<5;i++)
	{
		gets(temp);
		a[i]=temp;
	}
	printf("%s\n",a[0]);
	printf("%s\n",a[1]);
	printf("%s\n",a[2]);
	printf("%s\n",a[3]);
	return 0;
} 
