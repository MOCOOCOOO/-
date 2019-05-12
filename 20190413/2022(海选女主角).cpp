#include<stdio.h>
#include<math.h> 
int main()
{
	int n,m;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		int max=0;
		int row,col;
		row=col=0x7fffffff;
		for(int i=1;i<=m;++i)
  		{
       		for( int j = 1; j <= n; ++j )
       		{
       			int x;
           		scanf("%d",&x);
            	if( fabs(x) > fabs(max) )
            	{
                	row = i,col = j;
                	max=x;
            	}
        }
   }
		printf("%d %d %d\n",row,col,max);
	}
	return 0; 
} 
