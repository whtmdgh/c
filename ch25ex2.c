#include <stdio.h>
void print_gugudan(int dan);

int main()
{
    int dan;
    printf("단을 입력해라: ");
    scanf("%d", &dan);
    print_gugudan(dan);
    return 0;
}

void print_gugudan(int dan)
{
    int i;
    for (i=1; i<=9; i++){
        printf("%d * %d = %d\n", dan, i, dan * i);
    }
}
