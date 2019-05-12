#include<stdio.h>
#include<string.h>
int main()
{
	char a[100000],b[100000];	//加到10万才行，不然总是报runtime error估计是数组越界 
	while(~scanf("%s%s",&a,&b))
	{
		int a_len=strlen(a),b_len=strlen(b);	//记录处理后数字的位数 
		int i=0,j=0;
		int a_have_dot=0,b_have_dot=0;	//判断有小数点为则置为1
		int point_dot=10000;	//记录小数点的位置 
		while(a[i]!='\0')
		{
			if(a[i]=='.')
			{
				a_have_dot=1;
				point_dot=i;
			}
			i++;
		 }
		if(a_have_dot==1)
		{
			for(int k=strlen(a);k>=0;k--)
			{
				if(a[k-1]=='0'&&k-1>point_dot)
					a_len--;
			}
			
		}
		point_dot=10000;
		while(b[j]!='\0')
		{
			if(b[j]=='.')
			{
				b_have_dot=1;
				point_dot=j;
			}
			j++;
		 }
		if(b_have_dot==1)
		{
			for(int k=strlen(b);k>=0;k--)
			{
				if(b[k-1]=='0'&&k-1>point_dot)
					b_len--;
			}
			
		}
		if(a_have_dot==1&&b_have_dot==0)	//没有小数点和有小数点的比较去点小数点 
			a_len--;
		if(a_have_dot==0&&b_have_dot==1)
			b_len--;
		if(a_len!=b_len)
		{
			//还要判断0和-0相等
			if(a_len==1||b_len==1)
			{
				if((a[0]=='-'&&a[1]=='0'&&a[1]==b[0]&&b_len==1)||(b[0]=='-'&&b[1]=='0'&&b[1]==a[0]&&a_len==1))
				{
					printf("YES\n");
					continue;
				}
			}
			printf("NO\n",a_len,b_len);
			continue;
		}
		for(int k=0;k<a_len;k++)
		{
			if(a[k]!=b[k])
			{
				printf("NO\n");
				break;
			}
			if(a[k]==b[k]&&k==a_len-1)
			{
				printf("YES\n");
			}
		}
	}
}
