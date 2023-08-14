/* ch21ex2.c */
/* 2018.XX.XX 김연숙 */
/* 크기가 5 인 문자포인터 배열을 선언하고 영화제목으로 초기화한다 */
/* 사용자로부터 평점을 매기게 한 후, 평점과 영화제목을 출력하는 프로그램 */
#include <stdio.h>
#include <ctype.h>
int main()
{
     int i;
     char ans;
     char *movies[5] = {"Mission Impossible", "Incredible", "Avengers", "Frozen","Big Hero"};
     int movie_rating[5]; // 영화 평점을 저장하기위한 배열
     printf("대종영화상 2018 년이 여기에 =========\n");
     printf("영화 후보작들을 평가해주세요 : ");
     for( i=0; i<5; i++)
     {
         printf("\n 영화 %s 를 보셨나요?(y/n):", movies[i]);
         scanf(" %c",&ans); // %c앞에 공백 필요
         if( toupper(ans) == 'Y')
         {
             printf("\n 평점을 매겨주세요(1~10 점 사이) ");
             scanf("%d",&movie_rating[i]);
             continue;
         }
         else
         {
            movie_rating[i] = -1;
         }
     }
     // 평점별로 정렬하기

     printf("\n ========= 여러분들의 평점 ===========\n");
     for( i=0; i<5; i++)
     {
        if( movie_rating[i] >= 0) // 본 영화만 출력하기.
            printf("영화 %s 는 평점이 %d 점.\n",movies[i], movie_rating[i]);
     }
    return 0;
}
