//ch25lab3.c

#include <stdio.h>
int main()
{
    int x = 10, y = 20;
    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);    // �Լ� ȣ�� �ϼ���
    printf("swap() ȣ�� ��");
    printf("x = %d, y = %d", x, y);
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
