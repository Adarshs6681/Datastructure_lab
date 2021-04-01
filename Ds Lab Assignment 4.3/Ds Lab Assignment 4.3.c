/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<conio.h>
struct Node
{
int data;
struct Node *next;
}*top = NULL;

void push(int);
void pop();
void display();
int search();

void main()
{
struct node *p = NULL;
int choice, value, result;
printf("\n:: Stack using Linked List ::\n"); 
while(1)
{
printf("\n****** MENU ******\n");
printf("1. Push\n2. Pop\n3. Display\n4. Search\n5. Exit\n");
printf("Enter your choice: ");
scanf("%d",&choice);
switch(choice)
{case 1: printf("Enter the value to be insert:");
scanf("%d", &value);
push (value);
break;
case 2: printf("Enter the value to be delete:");
scanf("%d",&value);
pop (value);
break;
case 3: display ();
break;
case 4:printf ("Enter the value to be search:");
scanf("%d",&value);
result = search(p, value);
if (result)
{
printf("%d not found in the list.\n", value);
}
else
{
printf("%d found in the list.\n", value);
}
exit(&p);
search (value);
break;
case 5: exit ( 0 );
default: printf("\nWrong selection!!!Please try again!!!\n");
}
}
}
void push (int value)
{
struct Node *newNode;
newNode= (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
if(top == NULL)
newNode->next = NULL;
else
newNode->next = top;
top = newNode;
printf("\nInsertion is Success!!!\n");
}
void pop (int value)
{
if(top == NULL)
printf("\nStack is Empty!!!\n");
else
{
struct Node *temp = top;
printf("\nDeleted element: %d", temp->data);
top = temp->next;
free(temp);
}
}
void display ()
{
if(top == NULL)
printf("\nStack is Empty!!!\n");
else
{
struct Node *temp = top;
while(temp->next != NULL)
{
printf("%d--->",temp->data);
temp = temp -> next;
}
printf("%d--->NULL",temp->data);
}
}
int search (int value)
{
struct Node*temp;
temp= top;
while (temp != NULL)
{
if (temp->data != value)
{
temp = temp->next;
}
}
}

