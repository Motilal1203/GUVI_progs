#include<stdio.h>

void main()
{ 
    int n,i,s=0,r,t;
    scanf("%d",&n);
    scanf("%d",&r);
    for(i=n+1;i<r;i++)
    {
        if(i%2!=0)
        {
           printf("%d ",i);
        }
    }
   
}
