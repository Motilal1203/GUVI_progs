#include<stdio.h>

void main()
{ 
char c;
scanf("%c",&c);
if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	printf("Vowel\n");
else
	printf("Consonant\n");
}
