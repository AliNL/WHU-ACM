#include<stdio.h>
#include<math.h>
double d(double b[],int n)
{
	double a[6];
	for(int i=0;i<6;i++)
	a[i]=b[(i+n)%6];
	return (a[4]*(a[0]-a[2])*(a[0]-a[2])+a[0]*(a[1]-a[3])*(a[1]-a[3])+(a[5]-a[1])*(a[1]-a[3])*(a[0]-a[2]))/((a[0]-a[2])*(a[0]-a[2])+(a[1]-a[3])*(a[1]-a[3]));
}
double e(double c,double b[],int n)
{
	double a[6];
	for(int i=0;i<6;i++)
	a[i]=b[(i+n-1)%6];
	if(a[0]==a[2])
	return a[5];
	else
	return ((c-a[0])*(a[1]-a[3]))/(a[0]-a[2])+a[1];
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	double r[n],x[6],a[6];
	for(i=0;i<n;i++)
	{
		r[i]=0;
		for(j=0;j<6;j++)
		scanf("%lf",&x[j]);
		for(j=0;j<6;j+=2)
		a[j]=d(x,j);
		for(j=1;j<6;j+=2)
		a[j]=e(a[j-1],x,j);
		for(j=0;j<6;j+=2)
		r[i]+=sqrt((a[j]-a[(2+j)%6])*(a[j]-a[(2+j)%6])+(a[(1+j)%6]-a[(3+j)%6])*(a[(1+j)%6]-a[(3+j)%6]));
	}
	for(i=0;i<n;i++)
	printf("%.3f\n",r[i]);
	return 0;
}
