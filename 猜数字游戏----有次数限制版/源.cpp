#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
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
	int count = 5;
	while (count)
	{
		printf("����%d�λ���\n", count);
		printf("�������");
		scanf_s("%d", &guess);
		if (guess > r)
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
		count = count - 1;//��һ�ξͼ���һ�λ��ᣬ��Ȼ��whileѭ��֮��
	}
	if (count == 0)
	{
		printf("���������л��ᣬ������ʧ��,��ȷ��ֵ�ǣ�%d", r);


	}
}





int main()
{

	int input = 0;
	//������������������
	//��������ֻ�õ���һ��
	srand((unsigned int)time(NULL));//���ֵ����ʱ��仯���仯   //���ܷ���ѭ������
	do
	{
		menu();//��Ҫʹ�ò˵���ֱ��ͨ��menu���ã�ֱ�ӵ����Ϸ���void menu����
		//ѡ��

		printf("��ѡ��");
		scanf_s("%d", &input); //����ҴӲ˵�������ѡ��ѡ��Ȼ������
		switch (input)      //switch�������
		{
		case 1:
			//����Ϸ���߼�
			game();    //�����ѡ��1������Ϸ����ʼ��Ϸ
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
