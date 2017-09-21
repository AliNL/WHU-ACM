#include<stdio.h>
int main()
{
	int n,i,a,b=0;
	scanf("%d",&n);
	for(i=0;i!=2*n+1;i++)
	{
		scanf("%d",&a);
		b=a^b;
	}
	printf("%d\n",b);
	return 0;
}
