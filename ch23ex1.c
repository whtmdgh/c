//�л� ������ ������ ����ü �����ϰ�, ������ ������ �� ����� �����Ͽ� ������ �����ϱ�
#include <stdio.h>
#include <string.h>

//����ü ����
struct st_info {
    char name[30];   //�л� �̸�
    char subject[30]; //���� ����
    int age;  //�л� ����
};

int main()
{
    //����ä ���� ���� �� �ʱ�ȭ
    struct st_info st = {"����ȣ", "����", 20};

    printf("%d���̽� %s���� ���������� %s�Դϴ�\n", st.age, st.name, st.subject);
    //�������� ����
    strcpy(st.subject, "����");
    //���� ����
    st.age = 21;
    printf("%d���̽� %s���� ���������� %s�Դϴ�\n", st.age, st.name, st.subject);

    //����ü ������ ���� ����
    struct st_info *st_ptr;
    st_ptr = &st;

    st_ptr -> age = 22;
    strcpy(st_ptr ->name , "ȫ�浿 ");
    strcpy(st_ptr ->subject, "C���");
    printf("%d���̽� %s���� ���������� %s�Դϴ�\n", st_ptr->age, st_ptr->name, st_ptr->subject);

    return 0;
}
