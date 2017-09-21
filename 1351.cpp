#include<stdio.h>
int main()
{
	int t,m,n,r,i,j,d[]={31,29,31,30,31,30,31,8};
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&m,&n);
		r=d[m-1]-n;
		for(j=m;j<8;j++)
		r+=d[j];
		printf("%d\n",r);
	}
	return 0;
}
