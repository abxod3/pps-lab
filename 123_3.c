#include <stdio.h>
int main()
{
 int n;
 printf("How many elements you want: ");
 scanf("%d",&n);
 int a[n],i, sum=0,max;
 printf("Enter %d element: ", n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
     sum= sum+ a[i];
 }
  max=a[0];
 for(i=0;i<n;i++)
 {
  if(a[i]>=max)
   max=a[i];
 }
 printf("\nsum of %d elements are: %d", n, sum);
 printf("\nMax elements is: %d", max);
 return 0;
 }
