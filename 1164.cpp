#include<stdio.h>
#include<string.h>
int main()
{
    char a[201],b[80];
    int n,i=0,j,k,l;
    while(scanf("%s",a)!=EOF)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%*2s %s",b);
            if(b[0]=='.')
            {
            	l=strlen(a);
            	if(a[l-2]!=':')
           	 	{
               		l=strlen(a);
                	for(k=l-2;k>0&&a[k]!='\\';k--);
                	a[k+1]='\0';
            	}
            }
            else if(b[0]=='\\')
            {
                if(b[1]!='\0')
                {
                    a[2]='\0';
                    strcat(a,b);
                    l=strlen(a);
                    a[l]='\\';
                    a[l+1]='\0';
                }
                else
                a[3]='\0';
            }
            else
            {
                strcat(a,b);
                l=strlen(a);
                a[l]='\\';
                a[l+1]='\0';
            }
        }    
        printf("Case %d\n%s\n\n",++i,a);
    }
    return 0;
}
