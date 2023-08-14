//구조체  배열을 생성하고 사용자 입력으로 채운뒤 출력하기
#include <stdio.h>
#include <string.h>

//구조체 정의
struct st_info {
    char name[30];  //학생 이름
    char subject[30]; // 과목
    int age;   //학생 나이
};

int main()
{
    struct st_info st[3];  //구조체 배열
    int i;

    for( i=0 ; i<3 ; i++) {
        puts("학생 이름은? ");
        gets(st[i].name);

        puts("등록 과목은? ");
        gets(st[i].subject);

        puts("학생 나이는? ");
        scanf("%d", &st[i].age);

        getchar();  //다음 반복을 위해 입력버퍼의 enter키 삭제
    }

    printf("\n등록된 학생 정보 ============\n");
    for (i=0 ; i<3 ; i++) {
        printf("%s\t%s\t%d\n", st[i].name, st[i].subject, st[i].age);
    }
    return 0;
}
