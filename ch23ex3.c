/* ch23ex3.c
2023.2.20 �迬��
����ü�迭�� �����ϰ� ����� �Է����� ä��� ����ϱ� */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ����ü ����
struct st_info {
    char name[30];  // �л� �̸�
    char subject[30];   // ���� ����
    int age;        // �л� ����
};

int main()
{
    struct st_info *st[3];   // ����ü ������ �迭
    int i;

    for( i=0; i<3; i++) {
        st[i] = (struct st_info *)malloc(sizeof(struct st_info));
        if( st[i] == NULL ) {
            printf("�޸� �Ҵ� ����");
            exit(1);
        }
        puts("�л� �̸���? ");
        gets(st[i]->name);

        puts("��� ������? ");
        gets(st[i]->subject);

        puts("�л��� ���̴�? ");
        scanf("%d", &st[i]->age);
        getchar();  // ���� �ݺ��� ���� �Է¹����� enterŰ ����
    }

    printf("\n��ϵ� �л� ���� ====================\n");
    for( i=0; i<3; i++) {
        printf("%s\t%s\t%d\n", st[i]->name, st[i]->subject, st[i]->age);
    }

    for(i = 0; i<3; i++) {
        free(st[i]);
    }
    return 0;
}
