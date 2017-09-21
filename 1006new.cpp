#include <stdio.h>
int main()
{
	int n,m,i,j,k,l;
	scanf("%d%d",&n,&m);
	int s[m][2],t[n];
	for(i=0;i<m;i++)
	scanf("%d%d",&s[i][0],&s[i][1]);
	scanf("%d",&l);
	int r[l],a[l][2],*x,*y;
	for(i=0;i<l;i++)
	{
		scanf("%d%d",&a[i][0],&a[i][1]);
		r[i]=-2;
	}
	for(i=0;i<l;i++)
	{
		if(r[i]>-2)
		continue;
		for(j=0;j<n;j++)
		t[j]=-1;
		t[a[i][0]]=0;
		for(j=0;j<m;)
		{
			for(k=0;k<m;k++)
			{
				x=(t[s[k][0]]<t[s[k][1]])?(&t[s[k][0]]):(&t[s[k][1]]);
				y=(t[s[k][0]]<t[s[k][1]])?(&t[s[k][1]]):(&t[s[k][0]]);
				if(*x>-1)
				{
					*y=(*y<(*x+1))?(*y):(*x+1);
					j++;
				}
				else if(*y>-1)
				{
					*x=*y+1;
					j++;
				}
			}
			if(j==0)
			break;
			if(t[a[i][1]]==0)
			break;
		}
		r[i]=t[a[i][1]];
		for(j=i+1;j<l;j++)
		{
			if(a[j][0]==a[i][0])
			r[j]=t[a[j][1]];
			else if(a[j][1]==a[i][0])
			r[j]=t[a[j][0]];
		}
	}
	for(i=0;i<l;i++)
	printf("%d\n",(r[i]>0)?(r[i]-1):r[i]);
	return 0;
}
