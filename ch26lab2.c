// ch26lab2.c

#include <stdio.h>
int get_divisor(int n);

int main()
{
    int n, cnt;
    printf("����� ���� ������ �Է��ϼ���: ");
    scanf("%d", &n);
    cnt = get_divisor(n);
    printf("%d�� ��� ������ %d���Դϴ�.", n, cnt);

    return 0;
}
int get_divisor(int n)
{
    int i, cnt = 0;
    for(i = 1 ; i <= n ; i++) {
        if (n % i == 0)  cnt++;
    }
    return cnt;
}
