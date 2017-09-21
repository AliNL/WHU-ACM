#include<stdio.h>
int main()
{
	int t,i;
	float p[50];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%f%*c",&p[i]);
		p[i]=p[i]/100;
		p[i]=1/(1-p[i]+p[i]*p[i]);
		p[i]=p[i]*100;
	}
	for(i=0;i<t;i++)
	printf("%.2f%%\n",p[i]);
	return 0;
}
