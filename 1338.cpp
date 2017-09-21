#include<stdio.h>

int f(int x)
{
    int i,j=1;
    for(i=1;i<x+1;i++)
    j*=i;
    return j;
}

int main()
{
	int i,j,t,n,a[80];
	scanf("%d",&t);
	int r[t];
	for(i=0;i<t;i++)
	{
		r[i]=0;
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%d",a[j]);
			r[i]+=a[j];
		}
		r[i]=f(r[i]);
		for(j=0;j<n;j++)
		if(a[j]>1)
		r[i]=r[i]/f(a[j]);
	}
	for(i=0;i<t;i++)
	printf("%lld\n",r[i]);
	return 0;
}
