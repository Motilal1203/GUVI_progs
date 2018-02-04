#include<stdio.h>

void main()
{ 
    int n,i,r,t;
    scanf("%d",&n);
    scanf("%d",&r);
    n++;
    while(n<r)
    {   t=0;
        for(i=2;i<n/2;i++)
        {
            if(n%i==0)
            {
                t=1;
                break;
            }
        }
        if(t==0)
        printf("%d ",n);
        
        n++;
    }
   
}
