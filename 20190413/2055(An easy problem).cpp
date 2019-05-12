#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		char x;
		int y;
		int sum;
		scanf("%c%d",&x,&y);
		getchar();
		if(x>='A'&&x<='Z')
		{
			sum=y+(x-'A'+1);
		}
		if(x>='a'&&x<='z')
		{
			sum=y-(x-'a'+1);
		}
		printf("%d\n",sum);
	}
	return 0;
}
