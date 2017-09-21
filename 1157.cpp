#include<stdio.h>
int main()
{
	int n,i=1,j,t,r,a,b;
	for(;;)
	{
		r=a=b=0;
		scanf("%d",&n);
		if(n==-1)
		break;
		for(j=0;j<n;j++)
		{
			scanf("%d",&t);
			if(t==1)
			{
				r+=a*b;
				a++;
				b=0;
			}
			else
			b++;
		}
		r+=a*b;
		printf("Case %d: %d\n",i++,r);
	}
	return 0;
}
