// �ؽ�Ʈ ȭ���� ���� ���� ���� ���ڿ� ���� */
#include <stdio.h>
#include <stdlib.h>             // exit(1)

int main()
{
    FILE *fptr = fopen("data.txt", "wt");
    if (fptr == NULL ) {
        printf("file open error!");
        exit(1);
    }

    //file open success
    fputs("Hello!\n", fptr);
    fputs("I am yeounsuk!!\n", fptr);
    fputc('A', fptr);

    fclose(fptr);
    return 0;
}


