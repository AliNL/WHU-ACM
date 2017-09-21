#include <stdio.h>
int main()
{
	int a[]={930,912,905,910,895,962,365,969,777,0,0,0,0};
	char n[2][5],s[3][22]={"Yes","No","No enough information"};
	int i=0,j,r[100][2];
	while(scanf("%s%s",n[0],n[1])!=EOF)
	{
		for(j=0;j<2;j++)
		switch(n[j][0])
		{
			case 'A':
				n[j][0]=0; break;
			case 'S':
				if(n[j][1]=='e') n[j][0]=1;
				else n[j][0]=10;
				break;
			case 'E':
				if(n[j][3]=='s') n[j][0]=2;
				else n[j][0]=6;
				break;
			case 'K':
				n[j][0]=3; break;
			case 'M':
				if(n[j][1]=='a') n[j][0]=4;
				else n[j][0]=7;
				break;
			case 'J':
				if(n[j][2]=='r') n[j][0]=5;
				else n[j][0]=12;
				break;
			case 'L':
				n[j][0]=8; break;
			case 'N':
				n[j][0]=9; break;
			case 'H':
				n[j][0]=11;
		}
		r[i][0]=1;
		if(n[0][0]<10)
		if(n[0][0]<n[1][0])
		r[i][0]=0;
		r[i][1]=2;
		if(a[n[0][0]]*a[n[1][0]]>0)
		{
			if(a[n[0][0]]>a[n[1][0]])
			r[i][1]=0;
			else
			r[i][1]=1;
		}
		i++;
	}
	for(j=0;j<i;j++)
	printf("%s\n%s\n",s[r[j][0]],s[r[j][1]]);
	return 0;
}
