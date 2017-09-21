#include<stdio.h>
int f(int a,int b)
{
	if(b==0)
	return a;
	else
	return f(b,a%b);
}
int main()
{
	int t,i,j,k,n,m,r;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		r=0;
		scanf("%d%d",&n,&m);
		for(j=0;j<n;j++)
		for(k=0;k<m;k+=1+(j%2))
		if(f(j+1,k+1)==1)
		r++;
		printf("%d\n",r);
	}
	return 0;
}
