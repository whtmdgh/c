//����ü  �迭�� �����ϰ� ����� �Է����� ä��� ����ϱ�
#include <stdio.h>
#include <string.h>

//����ü ����
struct st_info {
    char name[30];  //�л� �̸�
    char subject[30]; // ����
    int age;   //�л� ����
};

int main()
{
    struct st_info st[3];  //����ü �迭
    int i;

    for( i=0 ; i<3 ; i++) {
        puts("�л� �̸���? ");
        gets(st[i].name);

        puts("��� ������? ");
        gets(st[i].subject);

        puts("�л� ���̴�? ");
        scanf("%d", &st[i].age);

        getchar();  //���� �ݺ��� ���� �Է¹����� enterŰ ����
    }

    printf("\n��ϵ� �л� ���� ============\n");
    for (i=0 ; i<3 ; i++) {
        printf("%s\t%s\t%d\n", st[i].name, st[i].subject, st[i].age);
    }
    return 0;
}
