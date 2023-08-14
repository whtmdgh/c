#include <stdio.h>
int main()
{
    int arr[5] = {1,2,3,4,5};

    printf("arr[0]:%d, %d\n", arr[0], *(arr+0));
    printf("arr[1]:%d, %d\n", arr[1], *(arr+1));
    printf("arr[2]:%d, %d\n", arr[2], *(arr+2));
    printf("arr[3]:%d, %d\n", arr[3], *(arr+3));
    printf("arr[4]:%d, %d\n", arr[4], *(arr+4));

    return 0;
}

/
/*ch21lab1.c
*arr_ptr += 1;
*(arr_prt +1) += 1;
