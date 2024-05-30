#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//下面的是输入
	int arr[10] = { 0 };//创建一个大小为10的数组
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);//循环输入i的值
	}

	//为什么是i从9开始，不是从0开始
	//因为总共10个数，所以最大数字的下标是9
	//下面的代码就是从你往数组里面输入的数字，
	//一个个减一，从而达到逆序的效果
	for (int i = 9; i >= 0; i--)
	{//当i<0的时候就不满足循环条件就停下来了
		printf("%d ", arr[i]);//引用上面的数组
	}


	return 0;
}