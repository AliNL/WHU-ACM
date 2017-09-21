#include<stdio.h>
#include<string.h> 
int main()
{
	int t,i,j,k;
	scanf("%d",&t);
	int n[t];
	char r[t][30][30];
	struct xy
	{
		int x;
		int y;
	}xy[t][2],d4[4];
	for(k=0;k<t;k++)
	scanf("%d",&n[k]);
	for(i=0;i<n[k];i++)
	for(j=0;j<n[k];j++)
	{
		scanf("%c",&r[k][i][j]);
		if(r[k][i][j]=='p')
		{
			r[k][i][j]=2;
			xy[k][0].x=i;
			xy[k][0].y=j;
		}
		else if(r[k][i][j]=='a')
		{
			r[k][i][j]=3;
			xy[k][1].x=i;
			xy[k][1].y=j;
		}
	}
	d4[0].x=xy[k][0].x;d4[0].y=xy[k][0].y-1;
	d4[1].x=xy[k][0].x;d4[0].y=xy[k][0].y+1;
	d4[2].x=xy[k][0].x-1;d4[0].y=xy[k][0].y;
	d4[3].x=xy[k][0].x+1;d4[0].y=xy[k][0].y;
	for(i=0;i<4;i++)
	{
		if((d4[i].x<0)||(d4[i].x>n[k]-1)||(d4[i].y<0)||(d4[i].y>n[k]-1))
		break;
		else if(r[d4[i].x][d4[i].y]=='r')
		r[d4[i].x][d4[i].y]=2;
	}
	
}



























