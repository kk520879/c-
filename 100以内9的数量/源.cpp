#define _CRT_SECURE_NO_WARNINGS 1
//输出100之内9的数量，//有两个99
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
		if (i / 10 == 9)//这里是if，因为99里面要算两次，上面if完之后,这里接着if
		{
			printf("%d\n", i);
			count++;
		}

	}

	printf("100以内9的数量是%d个", count);
	return 0;
}