//������ ��ȯ
#include <stdio.h>

int get_total(int num) ;
int main()
{
    int num, sum;
    printf("���� �Է�: ");
    scanf("%d", &num);
    sum = get_total(num);
    printf("1 ~ %d������ ������:%d", num, sum);
    return 0;
}

int get_total(int num)
{
    int sum = 0;
    int i;
    for( i=1; i<=num; i++) {
        sum += i;
    }
    return sum;
}





