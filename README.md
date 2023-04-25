# dscl_exp9
Dynamic Memory Allocation
The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size. It returns a pointer of type void which can be cast into a pointer of any form. It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially. 

Syntax: 

ptr = (cast-type*) malloc(byte-size)
For Example:
ptr = (int*) malloc(100 * sizeof(int));
![image](https://user-images.githubusercontent.com/124857385/234323202-c3bd0451-8771-42de-ad35-1630144bf17f.png)


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
