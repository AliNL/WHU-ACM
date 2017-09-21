#include<stdio.h>
int main()
{
	int f,k,i,j,n,m;
	scanf("%d%d",&f,&k);
	int a[f];
	for(i=0;i<f;a[i++]=1);
	for(i=0;i<k;i++)
	{
		scanf("%d%d",&n,&m);
		for(j=n-1;j<f;j+=m)
		a[j]=0;
	}
	m=0;
	for(i=0;i<f;m+=a[i++]);
	printf("%d",m);
	return 0;
}
