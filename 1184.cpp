#include<stdio.h>
int main()
{
	int n,i;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=1;i*i<=n;i++);
		printf("%d\n",i-1);
	}
	return 0;
}
