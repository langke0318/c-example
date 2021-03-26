#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>	

//void test1(int arr[])//传递的是首个元素的指针 根据系统 32位 4字节/64位 8字节
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test2(char ch[])//传递的是首个元素的指针 根据系统 32位 4字节/64位 8字节
//{
//	printf("%d\n", sizeof(ch));
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//统计整个数组的长度 4*10 
//	printf("%d\n", sizeof(ch));//统计整个数组的长度 1*10 
//	test1(arr);
//	test2(ch);
//	return 0;
//}

int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	int f = 0, h = 0;
	i = a++ || ++b || d++;
	//i=a++&& ++b && d++;
	//h = a++ && ++b;
	//f = a++ && ++b;
	printf("a=%d\n b=%d\n c=%d\n d=%d\n i=%d\n f=%d\n h=%d\n", a, b, c, d,i,f,h);
	return 0;
}