#include <stdio.h>
#include<string.h>
int main()
{
	int n,m,i,j,k,p=0,a[4000][5],l[2],t[100],x,y;
	char b[4000][2],r[100][100]={},c[100][100];
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
			scanf("%s",b[i]);
		}
		scanf("%d%d",&l[0],&l[1]);
		for(i=1;i<n;i++)
		{
			t[i]=-1;
			c[i][0]='\0';
		}
		t[0]=0;
		c[0][0]='\0'; 
		for(j=0;j<m;)
		{
			for(k=0;k<m;k++)
			{
				if((a[k][2]>l[0])||(a[k][3]>l[1]))
				continue;
				x=(t[a[k][0]]<t[a[k][1]])?a[k][0]:a[k][1];
				y=(t[a[k][0]]<t[a[k][1]])?a[k][1]:a[k][0];
				if(t[x]>-1)
				{
					if(t[y]>(t[x]+a[k][4]))
					{
						t[y]=t[x]+a[k][4];
						strcpy(c[y],c[x]);
						strcat(c[y],b[k]);
					}
					j++;
				}
				else if(t[y]>-1)
				{
					t[x]=t[y]+a[k][4];
					strcpy(c[x],c[y]);
					strcat(c[x],b[k]);
					j++;
				}
			}
		}
		strcpy(r[p++],c[n-1]);
	}
	for(i=0;i<p;i++)
	printf("%s\n\n",r[i]);
	return 0;
}
