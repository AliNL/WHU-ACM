#include<stdio.h>
int main()
{
	int n,a[2],b[2],t[2],i,s=0;
	scanf("%d",&n);
	if(n<3)
	printf("0\n");
	else
	{
		scanf("%d%d",&b[0],&b[1]);
		t[0]=b[0];t[1]=b[1];
		for(i=1;i<n;i++)
		{
			a[0]=b[0];a[1]=b[1];
			scanf("%d%d",&b[0],&b[1]);
			s+=a[0]*b[1]-a[1]*b[0];
		}
		s+=b[0]*t[1]-b[1]*t[0];
	}
	printf("%d",s/2);
	return 0;
}
