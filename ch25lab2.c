//�Լ��� �迭 ����
#include <stdio.h>
void plus_one(int arr[]);
int main()
{
    int i;
    int arr[5] = {10, 20, 30, 40, 50};
    plus_one(arr);
    printf("�Լ� ȣ�� �� ������ �� ��ȭ =========\n");
    for (i=0 ; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void plus_one(int arr[])
{
    int i;
    for (i=0 ; i<5 ; i++) {
        arr[i] += 1;
    }

}
