#include <stdio.h>

struct time_info {
    int hour;
    int min;
    int sec;
};

int main()
{
    // ���۽ð�, ����ð�, �ð����̸� �����ϱ� ���� ���� ����
    struct time_info start, end, diff;

    // ���۽ð� �Է¹ޱ�
    printf("���۽ð�(�� �� ��)");
    scanf("%d %d %d", &start.hour, &start.min, &start.sec);

    // ����ð� �Է¹ޱ�(�ϼ��ϱ�)

    // �ð� ���� ����Ͽ� diff ������ �����ϱ�
    // 1. '��' ���̺��� ����ϱ�
    if( end.sec < start.sec ) {
        end.min --;
        end.sec += 60;
    }
    diff.sec = end.sec - start.sec;

    // 2. '��' ���� ����ϱ�(�ϼ��ϱ�)

    // 3. '��' ���� ����ϱ�(�ϼ��ϱ�)

    printf("�ð� ����: %d :%d :%d", diff.hour, diff.min, diff.sec);
    return 0;
}
