#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,r,a[2];
	double x[2];
	for(;;)
	{
		a[0]=a[1]=0;
		for(i=0;i<2;i++)
		for(j=0;j<3;j++)
		{
			scanf("%lf%lf",&x[0],&x[1]);
			if(i==0&&j==0&&x[0]==-100)
			return 0;
			r=(floor)(-sqrt(x[0]*x[0]+x[1]*x[1])/3)+1;
			if(r>-6)
			a[i]+=(100+20*r);
		}
		printf("SCORE: %d to %d, ",a[0],a[1]);
		if(a[0]==a[1])
		printf("TIE.\n");
		else
		printf("PLAYER %d WINS.\n",(a[0]>a[1])?1:2);
	}
}
