#include<stdio.h>
int main()
{	float s[100000][2];
	int n,i,j,t[100000]={},k=0;
	while(scanf("%d",&n)==1)
	{
		for(i=0;i<n;i++)
		{
			scanf("%f %f",&s[i][0],&s[i][1]);
			s[i][1]=(100-s[i][0])/s[i][1];
		}
		for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		if(s[i][0]-s[j][0]>0)
		{
			if(s[i][1]-s[j][1]>0)
			t[k]++;
		}
		else
		{
			if(s[i][1]-s[j][1]<0)
			t[k]++;
		}
		k++;
	}
	for(i=0;i<k;i++)
	printf("%d\n",t[i]);
	return 0;
}
