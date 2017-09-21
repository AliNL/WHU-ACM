#include<stdio.h>
#include<string.h> 
int main()
{
	char a[20],t[34][5];
	int n[34]={},i=-1,j;
	while(scanf("%s",a)==1)
	{
		if(a[0]>47&a[0]<58)
		strcpy(t[++i],a);
		else if(a[0]>64&a[0]<91|a[0]>96&a[0]<123)
		n[i]++;
	}
	for(j=0;j<i+1;j++)
	printf("%s %d\n",t[j],n[j]);
	return 0;
}
