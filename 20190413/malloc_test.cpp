#include<stdio.h>
#include<malloc.h>
int main()
{
	char *p;
	p=(char*)malloc(10);
	for(int i=0;i<10;i++)
	{
		*(p+i)='a'+i;
	}
	*(p+9)='\0';
	printf("%s\n",p);
}
