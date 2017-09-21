#include<stdio.h>
#include<string.h>
char c[1000001],v[10001],*j;
int t,i,l,n;
int main()
{
	scanf("%d",&t);
	float f,m,r;
	for(i=0;i<t;i++)
	{
		m=0;
		scanf("%s %s",c,v); 
		r=strlen(c);
		l=strlen(v);
		for(j=strstr(c,v);j!=0;j=strstr(j,v))
		{
			for(n=l;v[n%l]==*(j+n);n++);
			j+=n;
			m=(n>m)?n:m;
		}
		f=m*100/r;
		printf("%.3f%%\n",f);
	}
	return 0;
}
