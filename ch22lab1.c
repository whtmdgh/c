#include <stdio.h>
int main()
{
    int n, total = 0;
    int *score; // �Ҵ���� �޸��� �ּҸ� ������ ������ ����
    float avg;

    printf("�л����� �Է��ϼ���: ");
    scanf("%d", &n);

    score = (int *) malloc(n * sizeof(int));
    if( score == NULL ) {
        printf("�޸� �Ҵ� ����!");
        exit(1);
    }
    for( int i = 0; i < n; i++) {   // �޸� �Ҵ� ����
        printf("%d��° �л��� ������ �Է��ϼ���: ", i+1);
        scanf("%d", &score[i]);
        total += score[i];
    }
    avg = (float)total / n;
    printf("�л����� ������ %d���̸�, ����� %.1f���Դϴ�", total, avg);

    return 0;
}
