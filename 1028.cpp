#include<stdio.h>
#include<math.h>
#define m(a,b) ((a)>(b))?(a):(b)
int main()
{
	int t,i,j;
	scanf("%d",&t);
	int r[t],a[4];
	for(i=0;i<t;i++)
	{
		scanf("%*d");
		for(j=0;j<4;j++)
		scanf("%d",&a[j]);
		if((a[0]+a[1]-a[2]-a[3])%2!=0)
		r[i]=-1;
		else
		r[i]=m(abs(a[0]-a[2]),abs(a[1]-a[3]));
	}
	for(i=0;i<t;i++)
	printf("Case %d:\n%d\n\n",i+1,r[i]);
	return 0;
}
