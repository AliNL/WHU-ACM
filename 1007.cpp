#include<stdio.h>
int main()
{
	int n,a[10000],b,i,j,k=0,r[100]={};
	while(scanf("%d",&n)==1)
	{
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=1;i<8;i++)
		for(j=0;j<n;j++)
		{
			scanf("%d",&b);
			if(b<a[j])
			a[j]=b;
		}
		for(i=0;i<n;i++)
		r[k]+=a[i];
		k++;
	}
	for(i=0;i<k;i++)
	printf("%d\n",r[i]);
	return 0;
}
