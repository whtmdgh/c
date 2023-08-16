// 함수의 인수로 변수의 값을 전달하기 */
#include <stdio.h>
void get_twice(int num);
int main()
{
    int num;
    printf("정수 입력: ");
    scanf("%d", &num);

    get_twice(num);
    printf("in main(), num = %d\n", num);
    return 0;
}

void get_twice(int num)
{
    num = num * 2;
    printf(" in get_twice(), num = %d\n", num);
}
