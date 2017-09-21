#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	long a[n],b[n],h[n],r=0,j,k;
	int s[1000000001][1000000001]={0};
	for(i=0;i<n;i++)
	{
		scanf("%ld%ld%ld",a[i],b[i],h[i]);
		for(j=a[i];j<b[i];j++)
		for(k=0;k<h[i];k++)
		if(s[j][k]==0)
		{
			s[j][k]=1;
			r++;
		}		
	}
	printf("%d\n",r);
	return 0;
}
