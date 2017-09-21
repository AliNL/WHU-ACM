#include<stdio.h>
int main()
{
	int n,i,j,k,s,l,x[1000]={},y=0;
	float m[300][2];
	while(scanf("%d",&n)==1)
	{
		for(i=0;i<n;i++)
		scanf("%f %f",&m[i][0],&m[i][1]);
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				l=0;
				for(k=j;k<n;k++)
				{
					if((m[i][0]-m[j][0])*(m[k][1]-m[j][1])==(m[i][1]-m[j][1])*(m[k][0]-m[j][0]))
					l++;
				}
				x[y]=(l>x[y])?l:x[y];
			}
		}
		y++;
	}
	for(i=0;i<y;i++)
	printf("%d\n",x[i]+2);
	return 0;
}
