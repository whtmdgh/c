#include <stdio.h>

struct time_info {
    int hour;
    int min;
    int sec;
};

int main()
{
    // 시작시간, 종료시간, 시간차이를 저장하기 위한 변수 선언
    struct time_info start, end, diff;

    // 시작시간 입력받기
    printf("시작시간(시 분 초)");
    scanf("%d %d %d", &start.hour, &start.min, &start.sec);

    // 종료시간 입력받기(완성하기)

    // 시간 차이 계산하여 diff 변수에 저장하기
    // 1. '초' 차이부터 계산하기
    if( end.sec < start.sec ) {
        end.min --;
        end.sec += 60;
    }
    diff.sec = end.sec - start.sec;

    // 2. '분' 차이 계산하기(완성하기)

    // 3. '시' 차이 계산하기(완성하기)

    printf("시간 차이: %d :%d :%d", diff.hour, diff.min, diff.sec);
    return 0;
}
