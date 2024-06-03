#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include<stdbool.h>
void menu()//void函数不需要返回，menu将函数体封装，将菜单独拎出来，
{
	// 打印菜单
	printf("********************************\n");
	printf("********** 1. play *************\n");
	printf("********** 0. exit *************\n");
	printf("********************************\n");
}
void game()
{
	//1. 游戏的逻辑，生成随机数
	int r = rand() % 100 + 1;
	//2. 猜数字
	int guess = 0;
	while (1)
	{
		printf("轻猜数字");
		scanf("%d", &guess);
		if (guess > r)   //r就是随机生成的数字
		{
			printf("猜大了\n");
		}
		else if (guess < r)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;  //猜对了，就直接停止
		}
	}
}





int main()
{

	int input = 0;
	//设置随机数的生成起点
	//整个工程只用调用一次
	srand((unsigned int)time(NULL));
	do
	{
		menu();//想要使用菜单，直接通过menu调用
		//选择

		printf("请选择");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//玩游戏的逻辑
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input); //括号内放入input



	return 0;
}
