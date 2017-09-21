#include<stdio.h>
int main()
{
	int n,i,j=0,k,a[50000],b,c,r[100]={};
	char s[2][4]={"YES","NO"};
	scanf("%d",&n);
	while(n>0)
	{
		c=0;
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		{
			scanf("%d",&b);
			a[i]-=b;
		}
		for(i=0;i<n;i++)
		{
			if(a[i]<0)
			{
				c=0;
				for(k=i+1;k<n+i+1;k++)
				{
					c+=a[k%n];
					if(c<0)
					break;
				}
				if(c>=0)
				break;
			}
		}
		if(c<0)
		r[j]=1;
		j++;
		scanf("%d",&n);
	}
	for(i=0;i<j;i++)
	printf("%s\n",s[r[i]]);
	return 0;
} 
