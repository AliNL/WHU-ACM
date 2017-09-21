#include <stdio.h>
int main()
{
	int n,m,i,j,k,l,a[2];
	scanf("%d%d",&n,&m);
	int s[m][2],t[n];
	for(i=0;i<m;i++)
	scanf("%d%d",&s[i][0],&s[i][1]);
	scanf("%d",&l);
	int r[l],*x,*y;
	for(i=0;i<l;i++)
	{
		scanf("%d%d",&a[0],&a[1]);
		for(j=0;j<n;j++)
		t[j]=-1;
		t[a[0]]=0;
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
			if(t[a[1]]==0)
			break;
		}
		r[i]=(t[a[1]]>0)?(t[a[1]]-1):t[a[1]];
	}
	for(i=0;i<l;i++)
	printf("%d\n",r[i]);
	return 0;
}
