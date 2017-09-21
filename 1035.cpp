#include<stdio.h>
int main()
{
	int n[100],i=0,j;
	scanf("%d",&n[i]);
	while(n[i++]>0)
	scanf("%d",&n[i]);
	for(j=0;j<i-1;j++)
	printf("%d\n",(n[j]+1)/2);
	return 0;
}
