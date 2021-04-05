#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7*1 计算\0 sizeof(arr)计算的数组的大小，单位是字节
	//printf("%d\n", sizeof(arr + 0));// 4/8  首元素地址
	//printf("%d\n", sizeof(*arr));//1 *arr 首元素的大小
	//printf("%d\n", sizeof(arr[1]));// 1 第二个元素的大小	
	//printf("%d\n", sizeof(&arr));//4/8 数组的地址
	//printf("%d\n", sizeof(&arr + 1));//4/8 跳过数组的下个数组的地址
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 第二个元素的地址

	//printf("%d\n", strlen(arr));// 6 不计算\0 
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));//err  非法访问内存 ‘a’=97
	////printf("%d\n", strlen(arr[1]));//err  非法访问内存 ‘b’=98
	//printf("%d\n", strlen(&arr));//6 &arr-数组的地址-数组指针 char(*p)[7]=&arr
	//printf("%d\n", strlen(&arr + 1));//随机值
	//printf("%d\n", strlen(&arr[0] + 1));//5 "b,c,d,e.f"
	
	//char* p = "abcdef";
	//printf("%d\n", sizeof(p));//4/8 计算指针变量P的大小
	//printf("%d\n", sizeof(p + 1));//4/8 b的地址
	//printf("%d\n", sizeof(*p));//1 *p -a 字符串的第一个字符
	//printf("%d\n", sizeof(p[0]));//1 a的大小 int arr[10]; arr[0]== *(arr+0) p[0]== *(p+0)
	//printf("%d\n", sizeof(&p));//4/8 a的地址
	//printf("%d\n", sizeof(&p + 1));//4/8 下个数组的地址
	//printf("%d\n", sizeof(&p[0] + 1));//4/8 b的地址

	//printf("%d\n", strlen(p));//6 字符串大小 abcdef
	//printf("%d\n", strlen(p + 1));// 5 bcdef
	//printf("%d\n", strlen(*p));//err
	//printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));//随机值 地址 碰到0才停
	//printf("%d\n", strlen(&p + 1));//随机值 地址 碰到0才停
	//printf("%d\n", strlen(&p[0] + 1));//5 bcdef

	//二维数组
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));// 48 3*4*4 
	printf("%d\n", sizeof(a[0][0]));//4 第一行 第一列 元素大小
	printf("%d\n", sizeof(a[0]));//16 第一行 4*4 
	printf("%d\n", sizeof(a[0] + 1));//4 第一行 第二个元素
	printf("%d\n", sizeof(*(a[0] + 1)));//4 第一行 第二个元素
	printf("%d\n", sizeof(a + 1));//4/8  a是二位数组的数组名，没有sizeof（数组名），也没有&（数组名），所以a是首元素地址，把二维数组看成一维数组时，二维数组的首元素是第一行，a就是第一行（首元素）的地址
	//a+1就是第二行的地址
	printf("%d\n", sizeof(*(a + 1)));//16 第二行大小
	printf("%d\n", sizeof(&a[0] + 1));//4/8 第二行地址
	printf("%d\n", sizeof(*(&a[0] + 1)));//16 第二行大小
	printf("%d\n", sizeof(*a));//16 第一行大小
	printf("%d\n", sizeof(a[3]));//16 

	return 0;
}
