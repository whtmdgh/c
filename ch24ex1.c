/* ch24ex1.c
2023.2.22 �迬��
���������� �������� �����ϱ� */
#include <stdio.h>

void global_local_fn(); // �Լ��� ���� ���� �ʿ�

// �������� ����. 0���� �ڵ� �ʱ�ȭ
int global_v1;

int main()
{
    // �������� ����. �ʱ�ȭ �ʿ�
    int local_v1 = 10;
    int test = 1000;
    global_v1 = 100;

    printf("global_v1:%d, local_v1:%d, test:%d\n", global_v1, local_v1, test);

    global_local_fn();  // �Լ� ȣ��
    return 0;
}
// ���� ���� ����
int global_v2;

void global_local_fn()  // �Լ� ����
{
    int local_v2 = 20;
    int test = 2000;
    global_v1 = 300;
    global_v2 = 200;
    printf("global_v1:%d, global_v2:%d, local_v2:%d, test:%d\n", global_v1, global_v2, local_v2, test);
}
