#include<stdio.h>
int main()
{
	char a[1000][101];
	int n=0,m;
	scanf("%s",a[0]);
	while(a[n][0]!='$')
	{
		for(m=0;a[n][m]!='\0';m++)
		{
			a[n][m]-=('B'+m);
			while(a[n][m]<0)
			a[n][m]+=26;
			a[n][m]+='A';
		}
		scanf("%s",a[++n]);
	}
	for(m=0;m<n;m++)
	printf("%s\n",a[m]);
	return 0;
}
