#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i;
    char pwd[20];
    int has_lower, has_upper, has_digit, length;

    has_lower = has_upper = has_digit = 0;

    puts("암호를 입력하세요:");
    gets(pwd);

    length = strlen(pwd);  //암호의 길이 구하기

    for (i = 0 ; i<length ;i++){      //문자열 안의 모든 문자에 대해 검사
        if(isupper(pwd[i]) != 0)
        {
            has_upper = 1;    // 대문자 찾았다.
        }
        else if(islower(pwd[i]) != 0)
        {
            has_lower = 1;
        }
        else if(isdigit(pwd[i]) != 0)
        {
            has_digit = 1;
        }
    }

    if(has_upper == 1 && has_lower && has_digit ){
        printf("암호가 안전합니다.");
    } else {
        printf("암호가 안전하지 않습니다.");
    }

    return 0;
}
