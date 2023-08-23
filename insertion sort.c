#include<stdio.h>
#include<conio.h>
int main()
{
 int a[10],i,j,k,n;
 int clrscr( );
 printf("How many elements you want to sort?\n");
 scanf("%d",&n);
 printf("\nEnter the Elements into an array:\n");
 for (i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=1;i<n;i++)
 {
 k=a[i];
 for(j= i-1; j>=0 && k<a[j]; j--)
 a[j+1]=a[j];
 a[j+1]=k;
 } printf("\n\n Elements after sorting: \n");
 for(i=0;i<n;i++)
 printf("%d\n", a[i]);
 getch( );
}
output:
How many elements you want to sort?
6

Enter the Elements into an array:
45
23
69
87
69
58


 Elements after sorting:
23
45
58
69
69
87