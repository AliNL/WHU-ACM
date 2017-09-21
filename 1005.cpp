#include <stdio.h>
int main()
{
	int n,i,j,k=0,s[100],v[100],c,l[2][100001],r[100];
	while(scanf("%d",&n)==1)
	{
		for(i=0;i<n;i++)
		scanf("%d%d",&s[i],&v[i]);
		scanf("%d",&c);
		for(i=0;i<c+1;i++)
		l[0][i]=0;
		l[1][0]=0;
		for(i=0;i<n;i++)
		for(j=0;j<c;j++)
		{
			l[(i+1)%2][j+1]=l[i%2][j+1];
			if(s[i]<=j+1)
			if((l[i%2][j+1-s[i]]+v[i])>l[(i+1)%2][j+1])
			l[(i+1)%2][j+1]=l[i%2][j+1-s[i]]+v[i];
		}
		r[k++]=l[n%2][c];
	}
	for(i=0;i<k;i++)
	printf("%d\n",r[i]);
	return 0;
}
