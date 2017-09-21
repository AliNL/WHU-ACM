#include<stdio.h>
#include<math.h>
int main()
{
	int n,c;
	double t;
	while(scanf("%d%d",&n,&c)!=EOF)
	if(n!=0)
	printf("%d\n",(modf((double)c/2/n,&t)>0.5)?c/2/n+1:c/2/n);
	else
	printf("0\n");
	return 0;
}
