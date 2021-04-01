/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
void main()
{
int i,ch,n1,n2,set1[10],set2[10],set4[20], set3[20];
char wish;
do
{
printf("press 1 for union");
printf("\npress 2 for intersection");
printf("\npress 3 for difference");
printf("\n enter ur choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nenter the size of set1\n");
scanf("%d",&n1);
printf("enter the element of set1\n");
for(i=0;i<n1;i++)
scanf("%d",&set1[i]);
printf("enter the size of set2\n");
scanf("%d",&n2);
printf("enter the elements of set2\n");
for(i=0;i<n2;i++)
scanf("%d",&set2[i]);
if(n1==n2)
{
 for(i=0;i<n2;i++)
 {
set3[i]=set1[i]||set2[i];
 }
 for(i=0;i<n2;i++)
 {
 printf("%d",set3[i]);
 }
}
else
{
printf("size are not equal");
}
break;
case 2:
printf("\nenter the size of set1\n");
scanf("%d",&n1);
printf("enter the element of set1\n");
for(i=0;i<n1;i++)
scanf("%d",&set1[i]);
printf("enter the size of set2\n");
scanf("%d",&n2);
printf("enter the elements of set2\n");
for(i=0;i<n2;i++)
scanf("%d",&set2[i]);
if(n1==n2)
{
 for(i=0;i<n2;i++)
 {
set3[i]=set1[i]&&set2[i];
 }
 for(i=0;i<n2;i++)
 {
 printf("%d",set3[i]);
 }
}
else
{
printf("size are not equal");
}
break;
case 3: 
printf("\nenter the size of set1\n");
scanf("%d",&n1);
printf("enter the element of set1\n");
for(i=0;i<n1;i++)
scanf("%d",&set1[i]);
printf("enter the size of set2\n");
scanf("%d",&n2);
printf("enter the elements of set2\n");
for(i=0;i<n2;i++)
scanf("%d",&set2[i]);
if(n1==n2)
{
 for(i=0;i<n2;i++)
 {
set3[i]=set1[i]&&!set2[i];
 }
 for(i=0;i<n2;i++)
 {
 printf("%d",set3[i]);
 }
}
else
{
printf("size are not equal");
}
break;
default:
printf("invalid case input");
}
printf("\n want to continue: ");
scanf("%c",&wish);
}
while(wish!='n');
}
