#include<stdio.h>
int main()
{
	int m,p,n;
	for(;;)
	{
		scanf("%d%d%d",&m,&p,&n);
		if(m==0&&p==0&&n==0)
			break;
		printf("%d\n",(m>p*n)?m:p*n);
	}
	return 0;
} 
