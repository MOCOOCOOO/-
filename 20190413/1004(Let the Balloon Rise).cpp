#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		getchar();
		char *color[1000]={NULL};
		char temp[1000][16];	//之前用temp[16]一直出错，忽略了color[j]=temp赋值的是temp的地址，而temp每次都会改变，导致所有的color[i]都会改变 
		int count[1000]={0};
		for(int i=0;i<n;i++)
		{
			gets(temp[i]);
			int j=0;
			int flag=0;	//标志位，如果遇到出现过的字符串置为1 
			while(color[j]!=NULL)
			{
				if(0==strcmp(color[j],temp[i]))
				{
					flag=0; 
					count[j]++;
				}
				j++;
			}
			if(flag==0)	//表明没有出现过该字符串，记录该字符串 
			{
				color[j]=temp[i];
			}
		}
		//比较count得到出现次数最多的字符串位置
		int max=0,index=0;
		for(int k=0;k<1000;k++)
		{
			if(count[k]>max)
			{
				
				max=count[k];
				index=k;
			}
		}
		printf("%s\n",color[index]); 
	}
	return 0;
 } 
