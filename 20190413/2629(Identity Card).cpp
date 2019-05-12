#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		char ID[19],addr[20];
		scanf("%s",ID);
		if(ID[0]=='3'&&ID[1]=='3')strcpy(addr,"Zhejiang");
		if(ID[0]=='1'&&ID[1]=='1')strcpy(addr,"Beijing");
		if(ID[0]=='7'&&ID[1]=='1')strcpy(addr,"Taiwan");
		if(ID[0]=='8'&&ID[1]=='2')strcpy(addr,"Macao");
		if(ID[0]=='5'&&ID[1]=='4')strcpy(addr,"Tibet");
		if(ID[0]=='2'&&ID[1]=='1')strcpy(addr,"Liaoning");
		if(ID[0]=='3'&&ID[1]=='1')strcpy(addr,"Shanghai");
		if(ID[0]=='8'&&ID[1]=='1')strcpy(addr,"Hong Kong");
		printf("He/She is from %s,and his/her birthday is on %c%c,%c%c,%c%c%c%c based on the table.\n",addr,ID[10],ID[11],ID[12],ID[13],ID[6],ID[7],ID[8],ID[9]);
	}
	return 0;
}
