#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
        return *(int *)a-*(int *)b;
}
int main()
{
	int i,n,m,a[100000];
	for(;;)
	{
		scanf("%d%d",&n,&m);
		if(n==0)
		break;
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		qsort(a,n,sizeof(a[0]),cmp);
		for(i=0;i<n;i+=m)
		{
			if(i!=0)
			printf(" ");
			printf("%d",a[i]);
		}
		printf("\n");
	}
	return 0;
}
