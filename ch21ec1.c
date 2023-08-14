// 문자포인터 배열의 간단한 예제

#include <stdio.h>
int main()
{
    int i;
    char movie1[50];
    char movie2[50];
    char movie3[50];
    char movie4[50];
    char movie5[50];
    char *movies[5] = {movie1, movie2, movie3, movie4, movie5};
    for (i=0 ; i<5 ; i++)
    {
       printf("#%d 영화 제목은?", i+1);
       gets(movies[i]);
    }
    for (i=0 ; i<5 ; i++)
    {
        puts(movies[i]);
    }

    return 0;
}
