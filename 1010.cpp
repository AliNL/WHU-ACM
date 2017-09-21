#include<stdio.h>
int main()
{
	int n[1000],i=0,j,q[1000],k;
	scanf("%d",&n[0]);
	while(n[i]!=0)
	{
		k=-65535;
		for(j=0;j<n[i];j++)
		{ 
			scanf("%d",&q[j]);
			k=(k>q[j])?k:q[j];
		} 
		while(k<0)
		k+=2006;
		while(k>2005)
		k-=2006;
		for(j=1;j<n[i];j++)
		k=(k*2)%2006;
		n[i]=k;
		scanf("%d",&n[++i]);
	}
	for(j=0;j<i;j++)
	printf("%d\n",n[j]);
	return 0;
}
