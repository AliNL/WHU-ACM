#include<stdio.h>
#include<stdlib.h>
int c(const void *a, const void *b)
{
     return(*(int *)a-*(int *)b);
}
int main()
{
	int t;
	scanf("%d",&t);
	int n[t],i,j,a[t][1000];
	for(i=0;i<t;i++)
	{
		scanf("%d",&n[i]);
		for(j=0;j<n[i];j++)
		scanf("%d",&a[i][j]);
		for(j=n[i]-1;j>0;j--)
		a[i][j]-=a[i][j-1];
		qsort(a[i],n[i],sizeof(a[0][0]),c);
	}
	for(i=0;i<t;i++)
	{
		printf("Case %d:\n",i+1);
		for(j=0;j<n[i]-1;j++)
		printf("%d ",a[i][j]);
		printf("%d\n",a[i][j]);
		if(i<t-1)
		printf("\n");	
	}
	return 0;
}
