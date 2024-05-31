#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	long int age, b;//因为数据比较大，为避免数据溢出，所以在这里采取长整形定义
	scanf("%ld", &age);//长整形对应的占位符是ld
	b = age * 31560000;
	printf("%ld", b);


	return 0;
}