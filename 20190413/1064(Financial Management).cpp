#include<stdio.h>
int main()
{
	float a=0,sum=0;
	for(int i=0;i<12;i++)
	{
		scanf("%f",&a);
		sum+=a;
	}
	printf("$%.2f\n",sum/12);
	return 0;
 } 
