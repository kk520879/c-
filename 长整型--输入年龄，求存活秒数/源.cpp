#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	long int age, b;//��Ϊ���ݱȽϴ�Ϊ������������������������ȡ�����ζ���
	scanf("%ld", &age);//�����ζ�Ӧ��ռλ����ld
	b = age * 31560000;
	printf("%ld", b);


	return 0;
}