#include<stdio.h>
#include<math.h>
#include<stdlib.h>

unsigned long long f(unsigned long long x)
{
    unsigned long long i,j=1;
    for(i=1;i<x+1;i++)
    j*=i;
    return j;
}    

int main()
{
    int t,i,k;
    scanf("%d",&t);
    unsigned long long x1,y1,x2,y2,n[t],j,r,l;
    for(i=0;i<t;i++)
    {
        scanf("%lld%lld%lld%lld%lld",&x1,&y1,&x2,&y2,&n[i]);
        x1=abs(x1-x2);
        y1=abs(y1-y2);
        if((n[i]-x1-y1)%2==1)
        n[i]=0;
        else
        {
            l=0;
            for(j=x1;j<n[i]-y1+1;j+=2)
            {
                r=f(n[i])/f((j-x1)/2)/f((j+x1)/2)/f((n[i]+y1-j)/2)/f((n[i]-y1-j)/2);
                l+=r;
            }
            n[i]=l;
        }
    }
    for(i=0;i<t;i++)
    printf("%lld\n",n[i]);
    system("PAUSE");
    return 0;
}                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
