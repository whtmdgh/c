//����ڰ� ���ϴ� ������ ���������͸� �����ϱ� ���� �޸𸮸� �Ҵ� �ް� 0 ~ 40���� ä���
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    int *ptr;  // �Ҵ�� �޸��� �ּҸ� �������� ������ ����

    printf("�� ���� ������ �����Ұǰ���? ");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));

    if(ptr == NULL) {       // �޸� �Ҵ� ����
        printf("�޸� �Ҵ� ����!");
        exit(1);     // ���α׷� ���� ����
    }
    else {  //�޸� �Ҵ� ����
        for (i=0; i<n; i++) {   //����ڰ� ���� ������ŭ �ݺ�
            ptr[i] = i * 10;    // 0, 10, 20 ....  �����ϱ�
            // *(ptr + i) = i * 10;
        }
            //����ϱ�
        for (i=0 ; i<n; i++) {
            printf("%d ",ptr[i] );
        }
        free(ptr);   //�޸� ����
    }
    return 0;
}
