#include<stdio.h>
int main()
{
	int n,i=-1,j,r[100];
	while(scanf("%d",&n)==1)
	{
		r[++i]=1;
		for(j=0;j<n;j++)
		r[i]*=2;
	}
	for(j=0;j<i+1;j++)
	printf("%d\n",r[j]);
	return 0;
} 
