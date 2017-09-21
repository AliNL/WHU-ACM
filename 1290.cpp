#include<stdio.h>
int main()
{
	int n,i,j,k=0,a[10000],b[1000]={0},t;
	scanf("%d",&n);
	while(n>0)
	{
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(j=0;j<n;j++)
		{
			for (i=0;i<n-j;i++)
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
				b[k]++;
			}
		}
		scanf("%d",&n);
		k++;
	}
	for(i=0;i<k;i++)
	printf("%d\n",b[i]);
	return 0;	
}
