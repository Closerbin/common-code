#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#define MAX 1000
//define����ı�ʶ������

int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
#define MAX(X,Y) (X>Y?X:Y)
//define����ĺ�
int main()
{
	int num1 = 10;
	int num2 = 20;
	//�����ĵ���
	int max = Max(num1, num2);
	printf("max = %d\n", max);
	//��ķ�ʽ
	max = MAX(num1, num2);
	//max = (num1>num2? num1:num2)
	printf("max = %d\n", max);
	return 0;
}