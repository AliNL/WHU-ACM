#include<stdio.h>
int main()
{
	int n,x,y,e,i,j,b,d;
	scanf("%d",&n);
	char m[n][1001];
	for(i=0;i<n;i++)
	{
		scanf("%d",&j);
		scanf("%s",m[j-1]);
	}
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		d=0;
		scanf("%d",&b);
		for(j=0;j<b;j++)
		{
			scanf("%d%d",&x,&y);
			for(e=0;m[x-1][e]==m[y-1][e]&e<1000;e++);
			d+=e;
		}
		printf("%d\n",d);
	}
	return 0;
}
