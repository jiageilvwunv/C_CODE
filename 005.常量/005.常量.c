#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAX 1000
int main()
{
//常量
//1.字面常量
//3.14;
//10;
//'a';
//"abcde"
//2.const修饰的常变量
//	const int num = 10;//num就是常变量-具有常属性
//	printf("%d\n", num);
//3.#define定义的标识常量
	//int n = MAX;
	//printf("%d", n);
//4.枚举常量一一列举的常量
	enum Sex
	{
		//这种枚举类型的变量的未来可能取值
		MALE=3,//赋初值
		FEMALE,
		SECRET
	};
	enum Sex s = FEMALE;
	printf("%d\n", s);
	return 0;
}
