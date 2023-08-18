// 파일 (input.txt)에서 학생들의 점수를 읽어와 총점과 평균을 다른 파일(output.txt)에 쓰기

#include <stdio.h>
#include <stdlib.h>

//학생정보를 저장하기 위한 구조체 정의
typedef struct stdent_info {
    char name[30];      //학생 이름
    int kor;            //국어 성적
    int eng;            //영어
    int math;           //수학
}student_type;

int main()
{
    student_type student;   // 파일에서 읽어온 학생정보를 저장하기 위한 변수 선언
    int cnt = 0, total = 0;
    float avg;

    FILE *in_ptr = fopen("input.txt", "r");     //읽을 파일 열기
    FILE *out_ptr = fopen("output.txt", "w");       //쓸 파일 열기

    if(in_ptr == NULL || out_ptr == NULL) {
        printf("file open fail");
        exit(1);
    }

    while(1) {
        //fscanf함수는 읽어온 데이터가 없을 경우 -1이 반환됨
        if (fscanf(in_ptr, "%s %d %d %d", student.name, &student.kor, &student.eng, &student.math) == -1 )  break;

        total = student.kor + student.eng + student.math;   //총점
        avg = (float)total / 3;  //평균 구하기

        printf("%s %d %d %d\n", student.name, student.kor, student.eng, student.math );
        //학생이름과 총점, 평균을 파일에 기록.
        fprintf(out_ptr, "%s %d %.2f\n", student.name, total, avg);
    }

    fclose(in_ptr);
    fclose(out_ptr);
}
