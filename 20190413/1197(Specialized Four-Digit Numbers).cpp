#include<stdio.h>
int main()
{
	for(int i=1000;i<10000;i++)
	{
		int dec=i%10+i/10%10+i/100%10+i/1000%10;
		int duo=i%12+i/12%12+i/12/12%12+i/12/12/12%12;
		int hex=i%16+i/16%16+i/16/16%16+i/16/16/16%16;
		if(dec==duo&&duo==hex)
			printf("%d\n",i);
	}
	return 0;
}
