#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i;
    char pwd[20];
    int has_lower, has_upper, has_digit, length;

    has_lower = has_upper = has_digit = 0;

    puts("��ȣ�� �Է��ϼ���:");
    gets(pwd);

    length = strlen(pwd);  //��ȣ�� ���� ���ϱ�

    for (i = 0 ; i<length ;i++){      //���ڿ� ���� ��� ���ڿ� ���� �˻�
        if(isupper(pwd[i]) != 0)
        {
            has_upper = 1;    // �빮�� ã�Ҵ�.
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
        printf("��ȣ�� �����մϴ�.");
    } else {
        printf("��ȣ�� �������� �ʽ��ϴ�.");
    }

    return 0;
}
