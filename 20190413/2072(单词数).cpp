#include<stdio.h>
#include<string.h>
//本题的关键是用了string.h中的strtok函数分割字符串，如果用c++可以用set集合 
int main()
{

	while(1)
	{
		char a[10000]={NULL};
		char *word[10000]={NULL};
		gets(a); 
		int count=0,i=0;
		if(a[0]=='#')
			break;
		char *result=strtok(a," ");
		if(result!=NULL)
		{
			word[i]=result;
		//	printf("%s\n",result);
			count++;
			i++;
		}
		while(1)
		{
			int flag=0;	//标记单词是否出现过，0表示未出现过 
			result=strtok(NULL," ");
			int j=0;
			if(result!=NULL)
				while(word[j]!=NULL)
				{
					if(strcmp(word[j],result)==0)
						flag=1;
					j++;
				}
			else
				break;
			if(flag==0)
			{
				count++;
				word[i]=result;
				i++;
			//	printf("%s\n",result);
			}
		}
		printf("%d\n",count);
	}
	return 0;
 } 
