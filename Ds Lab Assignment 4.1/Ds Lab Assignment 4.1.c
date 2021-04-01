/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

******************************************************************************/

#include <stdio.h>

int main()
{
    
int ar1[10], ar2[10], ar3[20];
int m,n,i,j,k;
printf("Enter number of elements in array 1 : ");
scanf("%d"
,&m);
printf("Enter array 1 in sorted order : ");
for(i=0;i<m;i++)
{
scanf("%d"
,&ar1[i]);
}
printf("Enter number of elements in array 2 : ");
scanf("%d"
,&n);
printf("Enter array 2 in sorted order : ");
for(i=0;i<n;i++)
{
scanf("%d"
,&ar2[i]);
}
i=j=k=0;
while(i<m&&j<n)
{
if(ar1[i]>ar2[j]){
if(ar1[i]>ar2[j])
{
ar3[k++]= ar2[j++];
}
else
{
ar3[k++]=ar1[i++];
}
}
while(i<m)
{

ar3[k++]=ar1[i++];

}

while(j<n)

{

ar3[k++]= ar2[j++];

}

printf("\nFirst array is :");

for(i=0;i<m;i++)

{

printf("%d"
,ar1[i]);

}

printf("\nSecond array is :");

for(i=0;i<n;i++)

{

printf("%d"
,ar2[i]);

}

printf("\nMerged array is :");

for(i=0;i<m+n;i++)

{

printf("%d"
,ar3[i]);

}
return 0;
}
}
