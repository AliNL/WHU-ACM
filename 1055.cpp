#include<stdio.h>
int f(char s[])
{
	int i=0;
	char c;
	while((c=getchar())!='\n')
	s[i++]=c;
	s[i]='\0';
	return 0;
}
int main()
{
	char s[201],r[100][201];
	int i,j=0;
	f(s);
	while(s[0]=='S')
	{
		f(s);
		for(i=0;s[i]!='\0';i++)
		{
			if((s[i]>64)&&(s[i]<90))
			{
				if(s[i]<70)
				r[j][i]=s[i]+21;
				else
				r[j][i]=s[i]-5;
			}
			else
			r[j][i]=s[i];
		}
		r[j][i]='\0';
		f(s);
		f(s);
		j++;
	}
	for(i=0;i<j;i++)
	printf("%s\n",r[i]);
	return 0;
}
