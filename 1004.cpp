#include <stdio.h>
#include<math.h>
int main()
{
	double a[2],b[5][5]=
	{
		1,100,2.54,45.72,30.48,
		1,1,0.0254,0.4572,0.3048,
		1,1,1,18,12,
		1,1,1,1,2,
		1,1,1,3,1
	};
	char s[3][10]={"Excellent","Spin","Neither"},x[2];
	int r[100],j=0,i;
	while(scanf("%lf",&a[0])!=EOF)
	{
		scanf("%*2s%c%*s%lf%*2s%c%*s%*lf%*s",&x[0],&a[1],&x[1]);
		for(i=0;i<2;i++)
		{
			switch(x[i])
			{
				case 'n':	x[i]=0;	break;
				case 't':	x[i]=1;	break;
				case 'c':	x[i]=2;	break;
				case 'b':	x[i]=3;	break;
				case 'e':	x[i]=4;
			}
			a[1]*=b[x[0]][x[1]];
			a[0]*=b[x[1]][x[0]];
		}
		if(a[0]==a[1])
		r[j++]=1;
		else if(a[0]==a[1]*6)
		r[j++]=0;
		else
		r[j++]=2;
	}
	for(i=0;i<j;i++)
	printf("%s\n\n",s[r[i]]);
	return 0;
}
