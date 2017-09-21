#include<stdio.h>
int main()
{
	int t,i,j,k,n[10],o,a;
	char s[50][50][30];
	struct d
	{
		char s[30];
		int x[2];
		int y[2];
		int b[2];
	}p[10][1250]={};
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n[i]);
		for(j=0;j<n[i];j++)
		for(k=0;k<n[i],k++)
		scanf("%s",s[j][k]);
		o=0;
		for(j=0;j<n[i];j++)
		for(k=0;k<n[i],k++)
		{
			if(s[j][k]!="N")
			{
				p[i][o].s=s[j][k];
				s[j][k]="N";
				p[i][o].x[0]=j;
				p[i][o].y[0]=k;
				for(a=j*n[i]+k+1;a<n[i]*n[i];a++)
				{
					if(s[a/n[i]][a%n[i]]==p[i][o].s)
					{
						p[i][o].x[1]=a/n[i];
						p[i][o].y[1]=a%n[i];
						
				}
			}
			
		}
		
		
	}
} 
