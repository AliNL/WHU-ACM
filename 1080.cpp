#include<stdio.h>
int main()
{
	int t,i,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		if(n%14==0)
		printf("snoopy wins the game!\n");
		else
		printf("flymouse wins the game!\n");
	}
	return 0;
}
