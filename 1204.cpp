#include<stdio.h>
int c(int m,int a[],int n)
{
	int j=m,t=1;
	while((j<n-1)&&(t>-1))
	{
		j++;
		if(a[j]==a[m]) t++;
		else t--;
	}
	if(j==n-1)
	return a[m];
	else
	return c(j+1,a,n);
}
int main()
{
	int n,a[500000],i;
	while(scanf("%d",&n)==1)
	{
		for(i=0;i<n;scanf("%d",&a[i++]));
		printf("%d\n",c(0,a,n));
	}
	return 0;
}
