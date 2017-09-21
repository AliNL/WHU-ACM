#include<stdio.h>
int f(int x)
{
	int i=1;
	while(x!=1)
	{
		x=x%2==0?x/2:3*x+1;
		i++;
	}
	return i;
}
int main()
{
	int a,b,i,m;
	for(;;)
	{
		m=0;
		scanf("%d%d",&a,&b);
		if(a==0&&b==0)
		break;
		for(i=a;i<b+1;i++)
		m=f(i)>m?f(i):m;
		printf("%d\n",m);
	}
	return 0;
}
