#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n,i,j,k,m,l,r,f;
    scanf("%d",&n);
    float a;
    char c[1000001],v[10001];
    for(i=0;i<n;i++)
    {
        scanf("%s%s",c,v);
        l=strlen(c);
        r=strlen(v);
        v[r]=v[0];
        f=0;
        for(j=0;j<l;j++)
        {
            if(c[j]==v[0])
            {
                for(k=0;(k<j+1)&&(c[j-k]==v[r-k]);k++);
                m=k-1;
                for(k=0;c[j+k]==v[k%r];k++);
                m+=k;
                j++;
                f=(m>f)?m:f;
            }
        }
        f=(r>f)?0:f;
        a=(float)f/l*100;
		printf("%.3f%%\n",a);
    }
    return 0;
}
