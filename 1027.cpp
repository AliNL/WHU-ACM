#include<stdio.h>
#include<stdlib.h>
int a[1000000][2],b[50][1000000];
int main()
{
	int m;
	scanf("%d",&m);
	int i,j,l[m],n[m],t[m],x,k,e;
	for(i=0;i<m;i++)
	{
		scanf("%d %d %d",&l[i],&n[i],&t[i]);
		for(j=0;j<n[i];j++)
		scanf("%d %d",&a[j][0],&a[j][1]);
		for(j=0;j<t[i];j++)
		{
			for(x=0;x<n[i];x++)
			b[i][x]=(a[x][0]+a[x][1]+l[i])%l[i];
			e=(n[i]>2)?n[i]:1;
			for(x=0;x<e;x++)
			{
				k=b[i][(x+1)%n[i]]-b[i][x];
				if(abs(k)==l[i]-1)
				k=1;
				if((k==1)&(a[x][0]==b[i][(x+1)%n[i]])&(a[(x+1)%n[i]][0]==b[i][x]))
				{
					b[i][x]=a[x][0];
					b[i][(x+1)%n[i]]=a[(x+1)%n[i]][0];
					a[x][0]=a[x][1];
					a[x][1]=a[(x+1)%n[i]][1];
					a[(x+1)%n[i]][1]=a[x][0];
					a[x][0]=b[i][x];
				}
				else if((k==1)&(a[x][0]==a[(x+2)%n[i]][0]))
				{
					a[x][1]=-a[x][1];
					a[(x+2)%n[i]][1]=-a[(x+2)%n[i]][1];
				}
				else if(k==0)
				{
					a[x][1]=-a[x][1];
					a[(x+1)%n[i]][1]=-a[(x+1)%n[i]][1];
				}
			}
			for(x=0;x<n[i];x++)
			a[x][0]=b[i][x];
		}
		if(t[i]==0)
		for(x=0;x<n[i];x++)
		b[i][x]=a[x][0];
	}
	for(i=0;i<m;i++)
	{
		if(i!=0)
		printf("\n\n");
		printf("Case %d:\n",i+1);
		for(j=0;j<n[i];j++)
		printf("%d ",b[i][j]);
	}
}
