#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include<stdbool.h>
void menu()//void��������Ҫ���أ�menu���������װ�����˵����������
{
	// ��ӡ�˵�
	printf("********************************\n");
	printf("********** 1. play *************\n");
	printf("********** 0. exit *************\n");
	printf("********************************\n");
}
void game()
{
	//1. ��Ϸ���߼������������
	int r = rand() % 100 + 1;
	//2. ������
	int guess = 0;
	while (1)
	{
		printf("�������");
		scanf("%d", &guess);
		if (guess > r)   //r����������ɵ�����
		{
			printf("�´���\n");
		}
		else if (guess < r)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;  //�¶��ˣ���ֱ��ֹͣ
		}
	}
}





int main()
{

	int input = 0;
	//������������������
	//��������ֻ�õ���һ��
	srand((unsigned int)time(NULL));
	do
	{
		menu();//��Ҫʹ�ò˵���ֱ��ͨ��menu����
		//ѡ��

		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//����Ϸ���߼�
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input); //�����ڷ���input



	return 0;
}
