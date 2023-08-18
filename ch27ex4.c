//파일 random access를 위한 fseek() 사용하기

#include <stdio.h>
int main()
{
    int ch;

    // 파일에 쓰기
    FILE *fptr = fopen("test.txt", "w");
    fputs("0123456789abcdefg", fptr);
    fclose(fptr);

    // 파일로부터 읽기
    fptr = fopen("test.txt", "r");

    //SEEK_SET
    fseek(fptr, 3, SEEK_SET);
    ch = fgetc(fptr);  // 문자 하나 읽어오기
    putchar(ch);

    //SEEK_CUR
    fseek(fptr, 3, SEEK_CUR);
    ch = fgetc(fptr);  // 문자 하나 읽어오기
    putchar(ch);

    // SEEK_END(EDF부터 이동)
    fseek(fptr, -3, SEEK_END);
    ch = fgetc(fptr);  // ""
    putchar(ch);

    fclose(fptr);
    return 0;
}
