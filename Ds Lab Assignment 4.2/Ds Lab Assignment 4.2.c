/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
# define MAX 5
int cqueue_arr[MAX];
int front = -1;
int rear = -1;
void insert(int item)
{
if((front == 0 && rear == MAX-1) || (front == rear+1))
{
printf("Queue Overflow \n");
return;
}
if (front == -1)
{
front = 0; rear = 0;
}
else
{
if(rear == MAX-1)
rear = 0;
else rear = rear+1;
}
cqueue_arr[rear] = item ;
}
void del()
{
if (front == -1)
{printf("Queue Underflow\n");
return ;
}
printf("Element deleted from queue is : %d\n",cqueue_arr[front]);
if(front == rear)
{
front = -1; rear=-1;
}
else
{
if(front == MAX-1) front = 0; else front = front+1;
}
}
void display()
{
int front_pos = front,rear_pos = rear; if(front == -1)
{
printf("Queue is empty\n");
return;
}
printf("Queue elements :\n");
if( front_pos <= rear_pos )
while(front_pos <= rear_pos)
{
printf("%d ",cqueue_arr[front_pos]); front_pos++;
}
else
{
while(front_pos <= MAX-1)while(front_pos <= MAX-1)
{
printf("%d ",cqueue_arr[front_pos]); front_pos++;
}
front_pos = 0;
while(front_pos <= rear_pos)
{
printf("%d ",cqueue_arr[front_pos]); front_pos++;
}
} printf("\n");
}
int search(int s)
{
int i;
for(i=front;i<=rear;i++)
{
if(s==cqueue_arr[i])
{
printf("element found at %d position \n",i+1);
}
}
}
int main()
{
int choice,item,s;
do
{
printf("1.Insert\n");
printf("2.Delete\n");
printf("3.Display\n");
printf("4.Search\n");printf("4.Search\n");
printf("4.Quit\n");
printf("Enter your choice : "); scanf("%d",&choice);
switch(choice)
{
case 1 : printf("Input the element for insertion inqueue : ");
scanf("%d", &item);
insert(item);
break;
case 2 : del();
break;
case 3: display();
break;
case 4: printf("enter the item to be searched for\n");
scanf("%d",&s);
search(s);
break;
case 5: exit ( 0 );
default: printf("\nWrong selection!!!Please try again!!!\n");
}
}
while(choice!=4);
return 0;
}