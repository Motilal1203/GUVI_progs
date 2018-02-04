#include<stdio.h>
#include<math.h>

void main()
{ 
    int n,s=1,i;
    scanf("%d",&n);
    if(n>=0)
    {
    for(i=1;i<=n;i++)
    {
        s*=i;
    }
    }
    
    printf("%d",s);
}
