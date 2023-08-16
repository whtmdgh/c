//함수의 인수로 문자배열의 주소를 전달하여 문자열을 번경하는 예제
#include <stdio.h>
#include <string.h>
void change_msg(char msg[]);
int main()
{
    char msg[10] = "Avengers";  //char *msg = &msg[0];
    change_msg(msg);   // msg 배열의 주소 전달
    printf("changed msg:%s", msg);
    return 0;
}
void change_msg(char msg[])   // *msg
{
    strcpy(msg, "XXXXXX");
}
