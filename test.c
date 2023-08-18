#include <stdio.h>
int main()
{
    int x = 10, y = 20;
    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);  // 함수 호출 완성하기
    printf("swap() 호출 뒤,\n");
    printf("x = %d, y = %d\n", x, y);
}

void swap(int *x_ptr, int *y_ptr)
{
    int temp;
    temp = *x_ptr;
    *x_ptr = *y_ptr;
    *y_ptr = temp;
}



