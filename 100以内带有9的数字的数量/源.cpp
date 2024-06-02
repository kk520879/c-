#define _CRT_SECURE_NO_WARNINGS 1
////100内带有9的数字，只有1个99
#include <stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i < 100; i++)
	{
		if (i % 10 == 9)
		{
			printf("%d\n", i);
			count++;
		}
		else if (i / 10 == 9)//这里是if，因为99里面要算两次，上面if完之后,这里接着if
		{
			printf("%d\n", i);
			count++;
		}

	}

	printf("100内带有9的数字数有%d个", count);
	return 0;
}
////总结
////两个代码不同之处就是要考虑99这个带有两个9的数字出现的次数
////你要根据题目来做题：是100以内有多少个9还是100以内带有9的数字有多少个
////如果是两个if连着用，前面的if用完，后面的if接着用，不存在前面的用完后面不用的
////如果前面的是if，后面的是else if，那么前面if要是使用成功，根本轮不到后面的eles if使用
