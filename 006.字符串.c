#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//�ַ�������һ���ַ�-��˫������������һ���ַ�
int main()
{
//    char arr[] = "hello";
    //�ַ����ڽ�βλ������һ��\0�ַ���\0���ַ���������־
    char arr1[] = "abc";
    char arr2[] = { 'a','b','c'};
    //printf("%s\n", arr1);
    //printf("%s\n", arr2);
    //���ַ�������
    //int len = strlen("abc");//string(�ַ���) lengthͷ�ļ�#include <string.h>
    //printf("%d\n", len);
    printf("%d\n", strlen(arr1));
    printf("%d\n", strlen(arr2));
    return 0;
}