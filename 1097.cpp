#include<stdio.h>
#include<math.h>
int main()
{
	const float x=3.14159,y=1.22837,z=0.57080,u=0.127826;
	float s[100]={},v;
	int n,i,j,k=0,a[100][2],b,t[2];
	while(scanf("%d",&n)==1)
	{
		for(i=0;i<n;i++)
		scanf("%d%d",&a[i][0],&a[i][1]);
		for(i=0;i<n;i++)
		for(j=0;j<n-i-1;j++)
		{
			if((a[j][0]>a[j+1][0])||((a[j][0]==a[j+1][0])&&(a[j][1]>a[j+1][1])))
			{
				t[0]=a[j][0];
				t[1]=a[j][1];
				a[j][0]=a[j+1][0];
				a[j][1]=a[j+1][1];
				a[j+1][0]=t[0];
				a[j+1][1]=t[1];
			}
		}
		for(i=0;i<n;i++)
		{
			b=0;
			for(j=0;j<i;j++)
			{
				if((a[j][0]==a[i][0]-1)&&(a[j][1]==a[i][1]-1))	b+=8;
				else if((a[j][0]==a[i][0]-1)&&(a[j][1]==a[i][1]))	b+=4;
				else if((a[j][0]==a[i][0]-1)&&(a[j][1]==a[i][1]+1))	b+=2;
				else if((a[j][0]==a[i][0])&&(a[j][1]==a[i][1]-1))	b+=1;
			}
			switch(b)
			{
				case 0:		v=x;			break;
				case 1:
				case 4:		v=x-y;			break;
				case 2:
				case 8:		v=x-z;			break;
				case 3:		v=x-y-z;		break;
				case 5:
				case 13:	v=x-2*y+z-u;	break;
				case 6:
				case 9:
				case 12:	v=x-y-u;		break;
				case 7:
				case 15:	v=x-2*y+z-2*u;	break;
				case 10:	v=x-2*z;		break;
				case 11:	v=x-y-z-u;		break;
				case 14:	v=x-y-2*u;
			}
			s[k]+=v;
		}
		k++;
	}
	for(i=0;i<k;i++)
	printf("%.2f\n",s[i]);
	return 0;
}
