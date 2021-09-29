#include <stdio.h>
int main()
{
 unsigned long int n, a=0,b=1,c=0;
 printf("Enter the value of n: ");
 scanf("%lu", &n);
 printf("%lu ",a);
 printf("%lu ",b);
 for(int i=2;i<n;i++)
 {
 c=a+b;
 printf("%lu ",c);
 
 a=b;
 b=c;
 
 }
 return 0;
}
