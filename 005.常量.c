#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAX 1000
int main()
{
//����
//1.���泣��
//3.14;
//10;
//'a';
//"abcde"
//2.const���εĳ�����
//	const int num = 10;//num���ǳ�����-���г�����
//	printf("%d\n", num);
//3.#define����ı�ʶ����
	//int n = MAX;
	//printf("%d", n);
//4.ö�ٳ���һһ�оٵĳ���
	enum Sex
	{
		//����ö�����͵ı�����δ������ȡֵ
		MALE=3,//����ֵ
		FEMALE,
		SECRET
	};
	enum Sex s = FEMALE;
	printf("%d\n", s);
	return 0;
}
