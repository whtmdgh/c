//함수에 배열 전달
#include <stdio.h>
void plus_one(int arr[]);
int main()
{
    int i;
    int arr[5] = {10, 20, 30, 40, 50};
    plus_one(arr);
    printf("함수 호출 후 데이터 값 변화 =========\n");
    for (i=0 ; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void plus_one(int arr[])
{
    int i;
    for (i=0 ; i<5 ; i++) {
        arr[i] += 1;
    }

}
