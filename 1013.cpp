#include<stdio.h>
int main()
{
	char a[100][101];
	int i,j,k,x,y=0,r[100][2];
	while(scanf("%s",a[y])!=EOF)
	{
		i=j=0;
		while(a[y][i]!='\0')
		{
			if(a[y][i]<a[y][j])
			j=i;
			i++;
		}
		for(k=j+1;k<i;k++)
		{
			if(a[y][k]==a[y][j])
			{
				for(x=1;x<i;x++)
				if(a[y][(k+x)%i]!=a[y][(j+x)%i])
				break;
				j=(a[y][(k+x)%i]<a[y][(j+x)%i])?k:j;
			}
		}
		r[y][0]=j;
		r[y++][1]=i;
	}
	for(i=0;i<y;i++)
	{
		for(j=0;j<r[i][1];j++)
		printf("%c",a[i][(r[i][0]+j)%r[i][1]]);
		printf("\n");
	}
	return 0;
}
