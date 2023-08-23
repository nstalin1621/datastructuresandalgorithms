#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 50
void enqueue();
void dequeue();
void display();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
int main()
{
int choice;
while (1)
{
printf("\n1.Insert  \n");
printf("2.Delete  \n");
printf("3.Display  \n");
printf("4.Quit \n");
printf("Enter your choice : ");
scanf("%d", &choice);
switch(choice)
{
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
exit(1);
default:
printf("Wrong choice \n");
}
}
}
void enqueue()
{
int item;
if(rear == MAX - 1)
printf("Queue Overflow \n");
else
{
if(front== - 1)
front = 0;
printf("Insert the element in queue : ");
scanf("%d", &item);
rear = rear + 1;
queue_array[rear] = item;
}
}
void dequeue()
{
if(front == - 1 || front > rear)
{
printf("Queue Underflow \n");
return;
}
else
{
printf("Element deleted from queue is : %d\n", queue_array[front]);
front = front + 1;
}
}
void display()
{
int i;
if(front == - 1)
printf("Queue is empty \n");
else
{
printf("Queue is : \n");
for(i = front; i <= rear; i++)
printf("%d ", queue_array[i]);
printf("n");
}
}
output:

1.Insert
2.Delete
3.Display
4.Quit
Enter your choice : 1
Insert the element in queue : 56

1.Insert
2.Delete
3.Display
4.Quit
Enter your choice : 1
Insert the element in queue : 96

1.Insert
2.Delete
3.Display
4.Quit
Enter your choice : 3
Queue is :
56 96 n
1.Insert
2.Delete
3.Display
4.Quit
Enter your choice : 4

--------------------------------
Process exited after 14.13 seconds with return value 1
Press any key to continue . . .