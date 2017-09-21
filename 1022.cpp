#include<stdio.h>
int main()
{
	int n,m,i,j,k,a[3001][2],p,x,y,r[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		x=0;
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%d%d",&a[j][0],&a[j][1]);
			x=(x<a[j][0])?a[j][0]:x;
		}
		a[m][1]=0;
		for(j=x;j>0;j--)
		{
			y=m;
			for(k=0;k<m;k++)
			{
				if(a[k][0]<j)
				continue;
				if(a[k][1]>a[y][1])
				y=k;
				else if(a[k][1]==a[y][1])
				y=(a[k][0]>a[y][0])?k:y;
			}
			if(y==m)
			continue;
			a[y][0]=a[y][1]=0;
		}
		r[i]=0;
		for(j=0;j<m;j++)
		r[i]+=a[j][1];
	}
	for(i=0;i<n;i++)
	printf("Case %d:\n%d\n\n",i+1,r[i]);
	return 0;
}
