/* ch21preex1.c
2023.2.17 김연숙
배열표기법, 포인터표기법 */
#include <stdio.h>
int main()
{
    int arr[5] = {1,2,3,4,5};
    int *arr_ptr = arr; // &arr[0]; // 배열의 시작주소를 갖는 포인터 변수 생성

//    *arr_ptr += 1;     // 포인터 표기법으로 값을 1 증가
//    *(arr_ptr+1) += 1;

    printf("arr[0]:%d, %d\n", arr[0], *(arr+0));
    printf("arr[1]:%d, %d\n", arr[1], *(arr+1));
    printf("arr[2]:%d, %d\n", arr[2], *(arr+2));
    printf("arr[3]:%d, %d\n", arr[3], *(arr+3));
    printf("arr[4]:%d, %d\n", arr[4], *(arr+4));

    return 0;
}
