/* ch24preex.c
2023.2.22 �迬��
�Լ��� ����� ����ȭ ���α׷��� ���캸�� */
#include <stdio.h>
// �Լ��� ���� ����  (prototype ����)
void input_score();
void compute_avg();


int main()
{
    input_score();  // ���� �Է¹޴� �Լ� ȣ��
    compute_avg();  // ��� ����ϴ� �Լ� ȣ��
    printf("����!\n");
    return 0;
}

void input_score()
{
    printf("���� �Է¹ޱ�\n");
    return;     // ���� ����
}
void print_avg()
{
    printf("��� ����ϱ�\n");
}

void compute_avg()
{
    printf("��� ����ϱ�\n");
    print_avg();    // ��� ����ϴ� �Լ� ȣ��
    return;
}



