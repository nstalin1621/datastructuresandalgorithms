#include<stdio.h>  
int main()    
{    
 int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",number,fact);    
return 0;  
}   
output:
Enter an integer: 6
Factorial of 6 = 720
--------------------------------
Process exited after 2.77 seconds with return value 0
Press any key to continue . . .