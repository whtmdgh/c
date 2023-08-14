/* ch23preex.c
2023.2.20 구조체 정의하기 */
#include <stdio.h>

// 구조체 정의
struct point_info {
    int x;
    int y;
};

// 학생 정보를 저장하기위한 구조체 정의
struct student_type {
    int ban;    // 반
    int no; // 번호
    char name[50];  // 이름
    int score;  // 성적
};

// ch23lab1.c 를 위한 구조체 정의


int main()
{
    struct point_info point;    // 구조체 포인터 변수 선언
    struct student_type student;
    // ch23lab1.c 를 위한 구조체 변수 선언

    return 0;
}

