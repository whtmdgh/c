//�Լ��� �μ��� ���ڹ迭�� �ּҸ� �����Ͽ� ���ڿ��� �����ϴ� ����
#include <stdio.h>
#include <string.h>
void change_msg(char msg[]);
int main()
{
    char msg[10] = "Avengers";  //char *msg = &msg[0];
    change_msg(msg);   // msg �迭�� �ּ� ����
    printf("changed msg:%s", msg);
    return 0;
}
void change_msg(char msg[])   // *msg
{
    strcpy(msg, "XXXXXX");
}
