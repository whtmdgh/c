/* ch22ex2.c
2023.2.20 �迬��
����ڰ� ���ϴ� ���� ������ŭ �޸� ������ �Ҵ�޾� ���� �����ϱ� */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, cnt; // ���� ����
    int *random_ptr;    // ������ ������ �޸� ������ �ּ� ����

    printf("�� ���� ������ �����ұ��? ");
    scanf("%d", &cnt);

    // seed�� ����
    srand((unsigned int) time(NULL));

    // �޸� �Ҵ�
    random_ptr = (int*)malloc(cnt * sizeof(int));

    if( random_ptr == NULL ) {
        printf("�޸� �Ҵ� ����!");
        exit(1);
    }
    // �Ҵ� ����
    for( i = 0; i < cnt ; i++) {
        random_ptr[i] = rand() % 500 + 1;   // 1 ~ 500 ������ ���� ���� �� ����
        printf("%d ", random_ptr[i]);
    }
    free(random_ptr);
    return 0;
}
