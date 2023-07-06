////#include <stdio.h>
//// 作用域
////int main()
////{
////	printf("hehe\n");
////
////	{
////		int a = 3;
////		printf("a=%d", a);
////	}
////	
////	return 0;
////}
//#include <stdio.h>
//int main()
//{
//	//声明一下变量
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}
//生命周期
//变量的生命周期：变量的创建和销毁之间的时间段
//局部变量生命周期：进入局部范围生命开始，出局部范围生命结束
//全部变量生命周期：程序的生命周期
#include <stdio.h>
int main()
{ 
	{
		int a = 3;
		printf("%d\n", a);
	}
	return 0;
}
