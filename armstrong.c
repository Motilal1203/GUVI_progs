#include<stdio.h>
#include<math.h>

void main()
{ 
    int n,s=0,r,t,p=0;
    scanf("%d",&n);
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
    printf("YES");
    else
    printf("NO");
}
