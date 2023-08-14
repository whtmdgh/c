#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int arr[10], max = 0, min = 100, i;

    srand((unsigned int) time(NULL));

    for( i=0 ; i<=9 ; i++){
        arr[i] = rand() % 100;
        printf("%d ",arr[i]);
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

     printf("최대값은 %d, 최소값은 %d 입니다.", max, min);
    return 0;
}
