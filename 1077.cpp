#include<stdio.h>
#include<math.h>
int main()
{
	int n[100]={},i,j[4],k=0;
	char s[201];
	while(scanf("%s",s)!=EOF)
	{
		for(i=0;i<4;i++)
		j[i]=0;
		for(i=0;s[i]!='\0';i++)
		{
			switch(s[i])
			{
				case '(': j[0]++; break;
				case '{': j[1]++; break;
				case '[': j[2]++; break;
				case '<': j[3]++; break;
				case ')': j[0]--; break;
				case '}': j[1]--; break;
				case ']': j[2]--; break;
				case '>': j[3]--;
			}
		}
		n[k++]=abs(j[0])+abs(j[1])+abs(j[2])+abs(j[3]);
	}
	for(i=0;i<k;i++)
	printf("%d\n",n[i]);
	return 0;
}
