#include<stdio.h>
int l()
{
	printf("+-----+");
	for(int j=0;j<5;j++)
	printf("-----------+");
	printf("\n");
	return 0;
}
int w(char a[],char b[],char c[],char d[],char e[],char f[])
{
	printf("|     |");
	printf("    MON    |");
	printf("    TUE    |");
	printf("    WED    |");
	printf("    THU    |");
	printf("    FRI    |\n");
}
int m()
{
	printf("|");
	for(int i=0;i<26;i++)
	printf(" ");
	printf("Morning");
	for(int i=0;i<32;i++)
	printf(" ");
	printf("|\n");
}
int main()
{
	int n,c,i,j;
	char s[100][35][10];
	while(scanf("%d",&n)==1)
	{
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<11;j++)
		{
			l();
			if(j==0)
			w();
			else if(j==1)
			m();
		}
	}
}
