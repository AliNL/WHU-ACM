#include<stdio.h>
int main()
{
    int n,i,j,k,x;
    int h[200],r[1000][2],p[200][200][2];
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
        scanf("%d",&h[i]);
        x=(n+10)/2;
        for(j=0;j<n;j++)
        {
            for(i=0;i<n-j;i++)
            if(h[i]>h[i+1])
            {
                k=h[i];
                h[i]=h[i+1];
                h[i+1]=k;
            }
        }
        for(i=0;i<x;i++)
        
        
        
