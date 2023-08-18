// ���� (input.txt)���� �л����� ������ �о�� ������ ����� �ٸ� ����(output.txt)�� ����

#include <stdio.h>
#include <stdlib.h>

//�л������� �����ϱ� ���� ����ü ����
typedef struct stdent_info {
    char name[30];      //�л� �̸�
    int kor;            //���� ����
    int eng;            //����
    int math;           //����
}student_type;

int main()
{
    student_type student;   // ���Ͽ��� �о�� �л������� �����ϱ� ���� ���� ����
    int cnt = 0, total = 0;
    float avg;

    FILE *in_ptr = fopen("input.txt", "r");     //���� ���� ����
    FILE *out_ptr = fopen("output.txt", "w");       //�� ���� ����

    if(in_ptr == NULL || out_ptr == NULL) {
        printf("file open fail");
        exit(1);
    }

    while(1) {
        //fscanf�Լ��� �о�� �����Ͱ� ���� ��� -1�� ��ȯ��
        if (fscanf(in_ptr, "%s %d %d %d", student.name, &student.kor, &student.eng, &student.math) == -1 )  break;

        total = student.kor + student.eng + student.math;   //����
        avg = (float)total / 3;  //��� ���ϱ�

        printf("%s %d %d %d\n", student.name, student.kor, student.eng, student.math );
        //�л��̸��� ����, ����� ���Ͽ� ���.
        fprintf(out_ptr, "%s %d %.2f\n", student.name, total, avg);
    }

    fclose(in_ptr);
    fclose(out_ptr);
}
