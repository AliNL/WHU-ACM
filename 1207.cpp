#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j;
	char a[100001];
	while(scanf("%s",a)!=EOF)
	{
		n=strlen(a);
		i=(n-1)/2;
		j=n/2;
		for(;j<n;)
		{
			if(a[i]!=a[j])
			break;
			i--;
			j++;
		}
		if(j==n)
		printf("%s\n",a);
		else
		{
			if(a[i]<a[j])
			{
				for(i=(n-1)/2;i>-1;i--)
				{
					if(a[i]=='9')
					{
						a[i]='0';
						continue;
					}
					else
					{
						a[i]++;
						break;
					}
				}
			}
			for(i=0;i<=(n-1)/2;i++)
			printf("%c",a[i]);
			for(i=n/2-1;i>-1;i--)
			printf("%c",a[i]);
			printf("\n");
		}
	}
	return 0;
}
