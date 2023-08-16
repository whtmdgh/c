// 여러 개의 인수를 값 또는 주소로 전달하는 예제
#include <stdio.h>
void change_data(int num1, int *num2, float arr[]);
int main()
{
    int i, num1 = 10, num2 = 20;
    float arr[5] = {1.5, 2.5, 3.5, 4.5, 5.5};
    // num1 은 값을 전달. num2와 arr는 주소 전달
    change_data(num1, &num2, arr);
    printf("함수 호출 후 데이터 값 변화 ==========\n");
    printf("num1:%d, num2:%d\n", num1, num2);
    for (i=0; i<5; i++)
    {
        printf("arr[%d]:%.1f\n", i,arr[i]);
    }
    return 0;
}
void change_data(int num1, int *num2, float arr[])
{
    int i;
    num1 = 50;
    *num2 = 100;
    for (i=0 ; i<5 ; i++)
    {
        arr[i] += 10;
    }
}
