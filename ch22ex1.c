//사용자가 원하는 개수의 정수데이터를 저장하기 위한 메모리를 할당 받고 0 ~ 40으로 채우기
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    int *ptr;  // 할당된 메모리의 주소를 갖기위한 포인터 변수

    printf("몇 개의 정수를 저장할건가요? ");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));

    if(ptr == NULL) {       // 메모리 할당 실패
        printf("메모리 할당 실패!");
        exit(1);     // 프로그램 강제 종료
    }
    else {  //메모리 할당 성공
        for (i=0; i<n; i++) {   //사용자가 원한 개수만큼 반복
            ptr[i] = i * 10;    // 0, 10, 20 ....  저장하기
            // *(ptr + i) = i * 10;
        }
            //출력하기
        for (i=0 ; i<n; i++) {
            printf("%d ",ptr[i] );
        }
        free(ptr);   //메모리 해제
    }
    return 0;
}
