//ch26lab1.c

#include <stdio.h>
int get_max(int n1,int n2);
int main()
{
    int n1, n2, bn;
    printf("�� ���� �Է��ϼ���: ");
    scanf("%d %d", &n1, &n2);
    bn = get_max(n1, n2);
    printf("�� �� �߿� ū ���� %d �Դϴ�.", bn);

    return 0;
}
 int get_max(int n1,int n2)
{
    if(n1 < n2) {
        return n2;
    }
    else {
        return n1;
    }

}
