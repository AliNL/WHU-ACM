#include<stdio.h>
int main()
{
	int t,n,i,j,k,r,a[3000],x;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		r=0;
		scanf("%d",&n);
		for(j=0;j<n;j++)
		scanf("%d",&a[j]);
		for(j=0;j<n;j++)
		{
			x=0;
			for(k=0;k<n;k++)
			{
				if(x==0)
				{
					if(a[k]==n-j)
					{
						a[k]=0;
						x=1;
					}
				}
				else
				{
					if(a[k]>0)
					r++;
				}
			}
		}
		printf("%d\n",r);
	}
	return 0;
} 
