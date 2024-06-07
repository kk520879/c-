#define _CRT_SECURE_NO_WARNINGS 1
//给定两个数，求这两个数的最大公约数

//最大公约数的概念：24和18的最大公约数是几？6       
//24%18=6    18%6=0，当余数为0的时候，被除的数就是最大公约数
//就是a%b=c,然后下一次的时候a就变成原来的b,原来的b就变成原来的c，如果第二次计算的时候结果是0，那么b就是最大公约数
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	int c = a % b;//只有当c不等于0的时候才要继续辗转相除
	while (c != 0)
	{
		a = b;//18
		b = c;//6
		c = a % b;//0   当c=0时，循环不进来
	}
	printf("最大公约数是%d\n", b);


	return 0;
}