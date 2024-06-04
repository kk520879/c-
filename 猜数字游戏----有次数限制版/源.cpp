#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
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
	int count = 5;
	while (count)
	{
		printf("还有%d次机会\n", count);
		printf("轻猜数字");
		scanf_s("%d", &guess);
		if (guess > r)
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
		count = count - 1;//才一次就减少一次机会，仍然在while循环之内
	}
	if (count == 0)
	{
		printf("用完了所有机会，猜数字失败,正确的值是：%d", r);


	}
}





int main()
{

	int input = 0;
	//设置随机数的生成起点
	//整个工程只用调用一次
	srand((unsigned int)time(NULL));//随机值随着时间变化而变化   //不能放在循环里面
	do
	{
		menu();//想要使用菜单，直接通过menu调用，直接调用上方的void menu函数
		//选择

		printf("请选择");
		scanf_s("%d", &input); //让玩家从菜单的两个选项选择，然后输入
		switch (input)      //switch条件语句
		{
		case 1:
			//玩游戏的逻辑
			game();    //当玩家选择1进入游戏，则开始游戏
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
