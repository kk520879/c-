#define _CRT_SECURE_NO_WARNINGS 1
//���100֮��9��������//������99
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
		if (i / 10 == 9)//������if����Ϊ99����Ҫ�����Σ�����if��֮��,�������if
		{
			printf("%d\n", i);
			count++;
		}

	}

	printf("100����9��������%d��", count);
	return 0;
}