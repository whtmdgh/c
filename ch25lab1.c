#include <stdio.h>
void get_square(int num1, int num2);
int main()
{
    int num1, num2;
    printf("두 개의 정수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);
    get_square(num1, num2);
    printf("num1 = %d, num2 = %d", num1, num2);
    return 0;
}
void get_square(int num1, int num2)
{
    num1 *= num1;
    num2 *= num2;
    printf("num1 = %d, num2 = %d\n", num1, num2);
}


