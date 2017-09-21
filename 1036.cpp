#include<stdio.h>
long long a[501]={0,1,2,4};
int f(int n)
{
	if(a[n]>0)
	return a[n];
	else
	a[n]=f(n-1)+f(n-2)+f(n-3);
	return a[n];
}
int main()
{
	int n[100],i,j,k;
	scanf("%d",&n[0]);
	for(i=0;n[i]>0;)
	{
		f(n[i]);
		scanf("%d",&n[++i]);
	}
	for(j=0;j<i;j++)
	printf("%lld\n",a[n[j]]);
	return 0;
}
