#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#define MAX 1000
//define定义的标识符常量

int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
#define MAX(X,Y) (X>Y?X:Y)
//define定义的宏
int main()
{
	int num1 = 10;
	int num2 = 20;
	//函数的调用
	int max = Max(num1, num2);
	printf("max = %d\n", max);
	//宏的方式
	max = MAX(num1, num2);
	//max = (num1>num2? num1:num2)
	printf("max = %d\n", max);
	return 0;
}