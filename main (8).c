/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int *ptr=(int*)malloc(20);
    *ptr=5;
    printf ("%d %d \n",*ptr,ptr);
    ptr=ptr+1;
{
    *ptr=2;
    printf ("*%d %d", *ptr, ptr);
}
return 0;
}
