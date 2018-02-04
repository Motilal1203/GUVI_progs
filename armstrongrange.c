#include<stdio.h>
#include<math.h>

void main()
{ 
    int n,s=0,r,t,p=0,m;
    scanf("%d",&n);
    scanf("%d",&m);
    
    while(n<m)
    {
        t=n;
        
        while (n!=0)
        {
            n /= 10;
            p++;
        }
        n=t;
        
        while(n>0)
        {
            r=n%10;
            s+=pow(r,p);
            n/=10;
        }
    
        if(t==s)
        printf("%d",s);
        
        n=++t;
    }
    
}