#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	for(;;)
	{
		scanf("%d",&n);
		if(n==0)
		break;
		if(n>2)
		switch(n%3)
		{
			case 0:
				n-=3;
				printf("3");
				break;
			case 1:
				n-=4;
				printf("2 2");
				break;
			case 2:
				printf("2");
		}
		else
		printf("%d",n);
		for(int i=0;i<n/3;i++)
		printf(" 3");
		printf("\n");
	}
	return 0;
}
