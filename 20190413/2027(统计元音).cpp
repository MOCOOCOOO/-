#include<stdio.h>
int main()
{
	char a[100];
	int n;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		gets(a);
		int j=0;
		int a2=0,e=0,i=0,o=0,u=0;
		while(a[j]!='\0')
		{
			if(a[j]=='a'||a[j]=='A')a2++;
			if(a[j]=='e'||a[j]=='E')e++;
			if(a[j]=='i'||a[j]=='I')i++;
			if(a[j]=='o'||a[j]=='O')o++;
			if(a[j]=='u'||a[j]=='U')u++;
			j++;
		}
		printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",a2,e,i,o,u);
		if(n!=0)printf("\n");
	}
}
