/* ch23ex3.c
2023.2.20 김연숙
구조체배열을 생성하고 사용자 입력으로 채운뒤 출력하기 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 구조체 정의
struct st_info {
    char name[30];  // 학생 이름
    char subject[30];   // 수강 과목
    int age;        // 학생 나이
};

int main()
{
    struct st_info *st[3];   // 구조체 포인터 배열
    int i;

    for( i=0; i<3; i++) {
        st[i] = (struct st_info *)malloc(sizeof(struct st_info));
        if( st[i] == NULL ) {
            printf("메모리 할당 실패");
            exit(1);
        }
        puts("학생 이름은? ");
        gets(st[i]->name);

        puts("등록 과목은? ");
        gets(st[i]->subject);

        puts("학생의 나이는? ");
        scanf("%d", &st[i]->age);
        getchar();  // 다음 반복을 위해 입력버퍼의 enter키 삭제
    }

    printf("\n등록된 학생 정보 ====================\n");
    for( i=0; i<3; i++) {
        printf("%s\t%s\t%d\n", st[i]->name, st[i]->subject, st[i]->age);
    }

    for(i = 0; i<3; i++) {
        free(st[i]);
    }
    return 0;
}
