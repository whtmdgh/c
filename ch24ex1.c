/* ch24ex1.c
2023.2.22 김연숙
전역변수와 지역변수 구별하기 */
#include <stdio.h>

void global_local_fn(); // 함수의 원형 선언 필요

// 전역변수 선언. 0으로 자동 초기화
int global_v1;

int main()
{
    // 지역변수 선언. 초기화 필요
    int local_v1 = 10;
    int test = 1000;
    global_v1 = 100;

    printf("global_v1:%d, local_v1:%d, test:%d\n", global_v1, local_v1, test);

    global_local_fn();  // 함수 호출
    return 0;
}
// 전역 변수 선언
int global_v2;

void global_local_fn()  // 함수 정의
{
    int local_v2 = 20;
    int test = 2000;
    global_v1 = 300;
    global_v2 = 200;
    printf("global_v1:%d, global_v2:%d, local_v2:%d, test:%d\n", global_v1, global_v2, local_v2, test);
}
