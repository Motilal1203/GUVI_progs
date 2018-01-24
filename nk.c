#include<stdio.h>

void main()
{
int n,k,a[20],i,sum=0;
scanf("%d",&n);
scanf("%d",&k);

for(i=0,i<n;i++)
  scanf("%d",&a[i]);
  
for(i=0,i<k;i++)
  sum+=a[i]);

printf("%d",sum);
