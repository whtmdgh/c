#include <stdio.h>

struct bk_info {
    char title[30];
    char name[30];
    int won;
};

int main()
{
    // 3개의 책에 대한 정보를 저장하기 위한 구조체 배열
    struct bk_info st[3];

    // 반복문을 돌면서 책의 제목과, 작가와 가격을 입력받기
    for( int i =0; i<3; i++) {
        printf("%d번째 책의 제목은? ", i + 1);


    }

    // 반복문을 돌면서 입력받은 책의 정보를 출력하기
    for( int i =0; i<3; i++) {
    }

}
