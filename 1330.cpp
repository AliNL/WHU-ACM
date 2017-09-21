#include<stdio.h>
int main()
{
	char a[1001],b[1001];
	int x[26],y[26],i,j;
	while(scanf("%s%s",a,b)!=EOF)
	{
		for(i=0;i<26;x[i]=0,y[i++]=0);
		for(i=0;a[i]!='\0';i++)
		x[a[i]-97]++;
		for(i=0;b[i]!='\0';i++)
		y[b[i]-97]++;
		for(i=0;i<26;i++)
		for(j=0;j<((x[i]>y[i])?y[i]:x[i]);j++)
		printf("%c",i+97);
		printf("\n");
	}
	return 0;
}
