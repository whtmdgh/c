/* ch21ex2.c */
/* 2018.XX.XX �迬�� */
/* ũ�Ⱑ 5 �� ���������� �迭�� �����ϰ� ��ȭ�������� �ʱ�ȭ�Ѵ� */
/* ����ڷκ��� ������ �ű�� �� ��, ������ ��ȭ������ ����ϴ� ���α׷� */
#include <stdio.h>
#include <ctype.h>
int main()
{
     int i;
     char ans;
     char *movies[5] = {"Mission Impossible", "Incredible", "Avengers", "Frozen","Big Hero"};
     int movie_rating[5]; // ��ȭ ������ �����ϱ����� �迭
     printf("������ȭ�� 2018 ���� ���⿡ =========\n");
     printf("��ȭ �ĺ��۵��� �����ּ��� : ");
     for( i=0; i<5; i++)
     {
         printf("\n ��ȭ %s �� ���̳���?(y/n):", movies[i]);
         scanf(" %c",&ans); // %c�տ� ���� �ʿ�
         if( toupper(ans) == 'Y')
         {
             printf("\n ������ �Ű��ּ���(1~10 �� ����) ");
             scanf("%d",&movie_rating[i]);
             continue;
         }
         else
         {
            movie_rating[i] = -1;
         }
     }
     // �������� �����ϱ�

     printf("\n ========= �����е��� ���� ===========\n");
     for( i=0; i<5; i++)
     {
        if( movie_rating[i] >= 0) // �� ��ȭ�� ����ϱ�.
            printf("��ȭ %s �� ������ %d ��.\n",movies[i], movie_rating[i]);
     }
    return 0;
}
