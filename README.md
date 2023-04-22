# dscl_exp9
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
<img width="319" alt="Screenshot 2023-04-07 203439" src="https://user-images.githubusercontent.com/124857385/233785416-68d59db8-134b-4248-8d34-cb2abde9312f.png">
