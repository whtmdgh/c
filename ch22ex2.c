/* ch22ex2.c
2023.2.20 김연숙
사용자가 원하는 난수 개수만큼 메모리 공간을 할당받아 난수 생성하기 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, cnt; // 난수 개수
    int *random_ptr;    // 난수를 저장할 메모리 공간의 주소 저장

    printf("몇 개의 난수를 생성할까요? ");
    scanf("%d", &cnt);

    // seed값 설정
    srand((unsigned int) time(NULL));

    // 메모리 할당
    random_ptr = (int*)malloc(cnt * sizeof(int));

    if( random_ptr == NULL ) {
        printf("메모리 할당 실패!");
        exit(1);
    }
    // 할당 성공
    for( i = 0; i < cnt ; i++) {
        random_ptr[i] = rand() % 500 + 1;   // 1 ~ 500 사이의 난수 생성 및 저장
        printf("%d ", random_ptr[i]);
    }
    free(random_ptr);
    return 0;
}
