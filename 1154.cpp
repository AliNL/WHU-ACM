#include<stdio.h>
int main()
{
	char s[51];
	int n=1,i;
	for(;;)
	{
		scanf("%s",s);
		if(s[0]=='#')
			break;
		printf("Case %d: ",n++);
		for(i=0;s[i]!='\0';i++)
		printf("%c",(i%2==0)?s[i]:s[i]-32);
		printf("\n");
	}
	return 0;
}
