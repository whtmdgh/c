//ch26lab1.c

#include <stdio.h>
int get_max(int n1,int n2);
int main()
{
    int n1, n2, bn;
    printf("두 수를 입력하세요: ");
    scanf("%d %d", &n1, &n2);
    bn = get_max(n1, n2);
    printf("두 수 중에 큰 값은 %d 입니다.", bn);

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
