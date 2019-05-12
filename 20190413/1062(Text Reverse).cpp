#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	getchar();	//±ØÒªµÄ£¬ 
	while(T--)
	{
		char a[1000],b[1000];
		gets(a);
		int b_index=0;
		for(int i=0;i<1000;i++)
		{
			if(a[i]==' '||a[i]=='\0')
			{
				int a_index=i;
				for(int j=b_index;j<i;j++)
				{
					b[j]=a[--a_index];
				}
				b[i]=a[i];
				b_index=i+1;
				if(a[i]=='\0')break; 
			}
		}
		printf("%s\n",b);
	}
	return 0;
}
