#include <stdio.h>
int main()
{
	int num1, num2;
	int* pNum;

	pNum=&num1;
	num1=25;

	*pNum=10;

	printf("num1:%d, *pNum:%d\n", num1, *pNum);

	num2 = *pNum;

	pNum=&num2;
	printf("num2:%d, *pNum:%d\n", num2, *pNum);

	return 0;
}
