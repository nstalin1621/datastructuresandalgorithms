#include<stdio.h>
int main() {
	int number;
	printf("Enter any integer: ");
	scanf("%d",&number);
	if(number % 2 ==0)
	         printf("%d is even number.",number); else
	         printf("%d is odd number.",number);
	return 0;
}
output:
Enter any integer: 15
15 is odd number.
--------------------------------
Process exited after 1.797 seconds with return value 0
Press any key to continue . . .