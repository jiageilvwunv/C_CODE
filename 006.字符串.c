#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//字符串就是一串字符-用双引号括起来的一串字符
int main()
{
//    char arr[] = "hello";
    //字符串在结尾位置隐藏一个\0字符，\0是字符串结束标志
    char arr1[] = "abc";
    char arr2[] = { 'a','b','c'};
    //printf("%s\n", arr1);
    //printf("%s\n", arr2);
    //求字符串长度
    //int len = strlen("abc");//string(字符串) length头文件#include <string.h>
    //printf("%d\n", len);
    printf("%d\n", strlen(arr1));
    printf("%d\n", strlen(arr2));
    return 0;
}