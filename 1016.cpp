#include<stdio.h>
int main()
{
	int n,i,j,a[1000][2],b[1000],x,y,c,d,k=0,r;
	char s[2][4]={"NO","YES"};
	while(scanf("%d",&n)==1)
	{
		r=0; 
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&a[i][0],&a[i][1]);
			if(i==0)
			x=y=a[0][1];
			else
			{
				x=(a[i][1]<x)?a[i][1]:x;
				y=(a[i][1]>y)?a[i][1]:y;
			}
		}
		c=x+y;
		for(i=0;;)
		{
			d=i;
			for(j=0;j<n;j++)
			if((a[j][0]==a[i][0])&&(a[j][1]+a[i][1]==c))
			{
				i++;
				break;
			}
			if((i==d)||(i==n))
			break;
		}
		if(i==n)
		r=1;
		printf("%s\n",s[r]);
	} 
	return 0;
}
