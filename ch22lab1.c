#include <stdio.h>
int main()
{
    int n, total = 0;
    int *score; // 할당받은 메모리의 주소를 저장할 포인터 변수
    float avg;

    printf("학생수를 입력하세요: ");
    scanf("%d", &n);

    score = (int *) malloc(n * sizeof(int));
    if( score == NULL ) {
        printf("메모리 할당 실패!");
        exit(1);
    }
    for( int i = 0; i < n; i++) {   // 메모리 할당 성공
        printf("%d번째 학생의 점수를 입력하세요: ", i+1);
        scanf("%d", &score[i]);
        total += score[i];
    }
    avg = (float)total / n;
    printf("학생들의 총점은 %d점이며, 평균은 %.1f점입니다", total, avg);

    return 0;
}
