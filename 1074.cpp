#include<stdio.h>
#include<stdlib.h>
int c(const void *a,const void *b)
{
	 return *(int *)b-*(int *)a;
}  
int main()
{
	int t,i,j,k,l,n,a[10000],r[20]={};
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
		scanf("%d",&a[j]);
		qsort(a,n,sizeof(a[0]),c);
		for(j=0;j<n-2;j++)
		{
			if(a[j]>a[j+1]+a[j+2])
			continue;
			k=j+1;
			l=n-1;
			while(k<l-1)
			{
				if(a[k]+a[l]>a[j])
				k++;
				else if(a[k]+a[l]<a[j])
				l--;
				else
				break;
			}
			if(a[j]==a[k]+a[l])
			{
				r[i]=a[j];
				break;
			}
		}
		r[i]=(r[i]==0)?-1:r[i];
	}
	for(i=0;i<t;i++)
	printf("%d\n",r[i]);
	return 0;
}
