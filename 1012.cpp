#include<stdio.h>
struct e
{
	int x;
	int y;
}z[4000000];
int s[2000][2000];
int main()
{
	int n[1000],m[1000],i=0,j,k,p,q,u,v;
	char c;
	while(scanf("%d %d",&n[i],&m[i])>0)
	{
		scanf("");
		p=0;
		q=0;
		for(j=0;j<n[i];j++)
		for(k=0;k<m[i];k++)
		{
			scanf("%c",&c);
			if(c=='w')
			{
				s[j][k]=1;
				z[p].x=j;
				z[p++].y=k;
			}
			else
			s[j][k]=0;
		}
		for(j=0;j<p;j++)
		for(k=j;k<p;k++)
		{
			for(u=z[j].x;(u<z[k].x+1)&(m[i]>0);u++)
			for(v=z[j].y;(v<z[k].y+1)&(m[i]>0);v++)
			if(s[u][v]==0)
			m[i]=0;
			if(s[u][v]==1)
			q++;
			m[i]=1; 
		}
		n[i]=q;
		i++;
	}
	for(j=0;j<i;j++)
	printf("%d\n",n[j]);
	return 0;
}
