#include<stdio.h>
 
void main() 
{
   int a, b, c;
   scanf("%d %d %d", &a, &b, &c);
 
   if ((a > b) && (a > c))
      printf("%d is greatest",a);
 
   if ((b > c) && (b > a))
      printf("%d is greatest",b);
 
   if ((c > a) && (c > b))
      printf("%d is greatest",c);
}
