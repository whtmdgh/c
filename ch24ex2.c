//������ �Է¹޾� ����� ����ϰ� ����ϱ�  */
#include <stdio.h>

#define MAX_SIZE 5      //�迭�� ũ��

// �Լ��� ���� ����
void input_score();
void compute_avg();
void print_avg();

//���� ���� ����
int scores[MAX_SIZE];
float avg;

int main()
{
    input_score();
    compute_avg();
    print_avg();
    return 0;
}

void input_score() {
    int i;
    // ������ �Է¹޾� �迭 ä���
    for( i=0 ; i<MAX_SIZE; i++ ) {
        printf("%d��° �л��� ������? ", i+1);
        scanf("%d", &scores[i]);
    }
}

void compute_avg()
{
    int i, sum = 0;
    for(i=0 ; i<MAX_SIZE; i++) {   //���� ���ϱ�
        sum += scores[i];
    }
    avg = (float)sum / MAX_SIZE;   //��� ���ϱ�
}

void print_avg()
{
    printf("����� %.1f ���Դϴ�\n", avg);
}

