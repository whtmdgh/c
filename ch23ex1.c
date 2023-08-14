//학생 정보르 저장할 구조체 정의하고, 변수를 선언한 뒤 멤버에 접근하여 데이터 저장하기
#include <stdio.h>
#include <string.h>

//구조체 정의
struct st_info {
    char name[30];   //학생 이름
    char subject[30]; //수강 과목
    int age;  //학생 나이
};

int main()
{
    //구조채 변수 선언 및 초기화
    struct st_info st = {"조승호", "영어", 20};

    printf("%d살이신 %s님의 수강과목은 %s입니다\n", st.age, st.name, st.subject);
    //수강과목 번경
    strcpy(st.subject, "수학");
    //나이 번경
    st.age = 21;
    printf("%d살이신 %s님의 수강과목은 %s입니다\n", st.age, st.name, st.subject);

    //구조체 포인터 변수 선언
    struct st_info *st_ptr;
    st_ptr = &st;

    st_ptr -> age = 22;
    strcpy(st_ptr ->name , "홍길동 ");
    strcpy(st_ptr ->subject, "C언어");
    printf("%d살이신 %s님의 수강과목은 %s입니다\n", st_ptr->age, st_ptr->name, st_ptr->subject);

    return 0;
}
