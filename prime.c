#include<stdio.h>

void main()
{ 
    int n,i,s=0,r,t;
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            t=1;
            break;
        }
    }
    if(t==1)
    printf("Not Prime");
    else
    printf("Prime ");
}
