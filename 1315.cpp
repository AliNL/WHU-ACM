#include<stdio.h>
int main()
{
	unsigned long long a,b,c,r[1000],j;
	int i=0;
	scanf("%lld%lld%lld",&a,&b,&c);
	while(c!=0)
	{
		a=a%c;
		b=b%(c-1);
		r[i]=a;
		for(j=1;j<b;j++)
		r[i]=(r[i]*a)%c;
		i++;
		scanf("%lld%lld%lld",&a,&b,&c);
	}
	for(j=0;j<i;j++)
	printf("%lld\n",r[j]);
	return 0;
}
