//함수의 인수로 변수의 주소를 전달하기 */
#include <stdio.h>
void get_twice(int *num_ptr);   // 함수의 원형 선언
int main()
{
    int num;
    printf("정수 입력: ");
    scanf("%d", &num);

    get_twice(&num);   // num의 주소 전달
    printf("In main, num = %d\n", num);
    return 0;
}

void get_twice(int *num_ptr)
{
    *num_ptr = *num_ptr * 2;
    printf("In get_twice(), *num_ptr = %d\n", *num_ptr);
}
