#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,j,k,x,y;
	char a[1002],b[1002],s[1002];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		x=y=1;
		scanf("%s",s);
		k=strlen(s);
		for(j=0;j<k;j++)
		a[j]=s[k-j-1];
		if(a[k-1]=='0')	x=0;
		a[k]='0';a[k+1]='\0';
		scanf("%s",s);
		k=strlen(s);
		for(j=0;j<k;j++)
		b[j]=s[k-j-1];
		if(b[k-1]=='0')	y=0;
		b[k]='0';b[k+1]='\0';
		if(x==0&&y==0)
		{
			printf("0\n");
			continue;
		}
		for(j=0;x+y>0;j++)
		{
			if(x+y>1)
			s[j]=a[j]+b[j]-48;
			else
			s[j]=(x==0)?b[j]:a[j];
			if(x==1)
			x=(a[j+1]=='\0')?0:1;
			if(y==1)
			y=(b[j+1]=='\0')?0:1;
			if(s[j]>57)
			{
				s[j]-=10;
				if(x==1)
				a[j+1]++;
				else
				b[j+1]++;
			}
		}
		s[j]='\0';
		k=strlen(s);
		x=1;
		for(j=k-1;j>-1;j--)
		{
			if(x==1)
			{
				if(s[j]=='0')
				continue;
				else
				x=0;
			}
			printf("%c",s[j]);
		}
		printf("\n");
	}
	return 0;
}
