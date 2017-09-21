#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n,m,l[2][10001];
	char a[10001],b[10001];
	while(scanf("%s%s",a,b)!=EOF)
	{
		n=strlen(a);
		m=strlen(b);
		l[1][0]=0;
		for(j=0;j<=m;l[0][j++]=0);
		for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			l[!(i&1)][j+1]=l[i&1][j]+1;
			else
			l[!(i&1)][j+1]=(l[!(i&1)][j]>l[i&1][j+1])?l[!(i&1)][j]:l[i&1][j+1];
		}
		printf("%d\n",l[n&1][m]);
	}
	return 0;
}
