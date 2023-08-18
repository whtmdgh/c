// ch26lab2.c

#include <stdio.h>
int get_divisor(int n);

int main()
{
    int n, cnt;
    printf("약수를 구할 정수를 입력하세요: ");
    scanf("%d", &n);
    cnt = get_divisor(n);
    printf("%d의 약수 개수는 %d개입니다.", n, cnt);

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
