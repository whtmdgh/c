//성적을 입력받아 평균을 계산하고 출력하기  */
#include <stdio.h>

#define MAX_SIZE 5      //배열의 크기

// 함수의 원형 선언
void input_score();
void compute_avg();
void print_avg();

//전역 변수 선언
int scores[MAX_SIZE];
float avg;

int main()
{
    input_score();
    compute_avg();
    print_avg();
    return 0;
}

void input_score() {
    int i;
    // 성적을 입력받아 배열 채우기
    for( i=0 ; i<MAX_SIZE; i++ ) {
        printf("%d번째 학생의 점수는? ", i+1);
        scanf("%d", &scores[i]);
    }
}

void compute_avg()
{
    int i, sum = 0;
    for(i=0 ; i<MAX_SIZE; i++) {   //총점 구하기
        sum += scores[i];
    }
    avg = (float)sum / MAX_SIZE;   //평균 구하기
}

void print_avg()
{
    printf("평균은 %.1f 점입니다\n", avg);
}

