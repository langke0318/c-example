#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));//解引用 取值
//		printf("0x%x ", arr[i]);//取地址
//
//	}
//
//	return 0;
//}


//参数是数组
//void print_arr1(int arr[3][5], int row, int col) {
//	int i = 0,j=0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////参数是指针
//void print_arr2(int(*arr)[5], int row, int col) {
//	int i = 0, j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", *(*(arr + i) + j));
//			//printf("%d ", (*(arr + i))[j]); //arr[i]==*(arr+i)==*(p+i)
//			//printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	int z;
//	z = sizeof(arr) / sizeof(arr[0]);
//	print_arr1(arr, 3, 5);
//	//数组名arr，表示首元素的地址
//	//但是二维数组的首元素是二维数组的第一行
//	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//	//可以数组指针来接收
//	print_arr2(arr, 3, 5);
//	printf("%d ", z);
//	return 0;
//}

//代码1 
// (*(void (*)())0)();
// 
//代码2
//void (*signal(int, void(*)(int)))(int);
//简化为
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
//说明：

//signal 是一个函数声明
//signal 函数的参数有2个，第一个是int,第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
//signal 函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是int，返回类型是void
