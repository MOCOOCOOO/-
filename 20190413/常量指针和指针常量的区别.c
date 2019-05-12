#include<stdio.h>
int main()
{
	const char * ch="123";
	//ch="345";	//const在指针*的前面为常量指针，可以修改指针，不能修改指针里面的内容
	//	ch[1]='2'	error C2166: l-value specifies const object
	char * const p_ch="987";
	p_ch[0]='4';
	p_ch="321";
//	printf("%c\n",p_ch[1]);
	return 0;
}