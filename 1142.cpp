#include<stdio.h>
#define M 1000000000
int main()
{
    int n,i,j=0,k,s[1000],c=0;
    long a[1000][35]={};
    while(scanf("%d",&n)==1)
    {
        a[j][0]=s[j]=1;
        for(i=0;i<n;i++)
        {
            for(k=0;k<s[j]+1;k++)
            {
                a[j][k]=2*a[j][k]+c;
                c=0;
                if(a[j][k]>=M)
                {
                    a[j][k]-=M;
                    c=1;
                }
            }
            if(a[j][s[j]]!=0)
            s[j]++;      
            a[j][0]++;
        }    
        j++;
    }
    for(i=0;i<j;i++)
    {
        printf("%ld",a[i][s[i]-1]);
        for(k=s[i]-2;k>-1;k--)
        printf("%09ld",a[i][k]);
        printf("\n");
    }
    return 0;
}
