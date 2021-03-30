#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h	>
#include <string.h>

//函数指针数组
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	//单一取函数地址
//	int (*pa)(int, int) = add;
//	//取一组函数地址
//	int	(*parr[4])(int, int) = { add,sub,mul,div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", (*parr[i])(8, 4));//(*parr[i])==parr[i]
//		printf("%d ", parr[i](8, 4));
//	}
//
//
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
//写一个函数指针pf，能够指向my_strcpy
//写一个函数指针数组，能够存放4个my_strcpy函数的地址
//
//int main()
//{
//	char* (*pf)(char*,const char*) = my_strcpy;
//	char (*pfarr[4])(char*, const char*) = { my_strcpy,my_strcpy,my_strcpy,my_strcpy };
//	return 0;
//}

//计算器

//普通方法
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	do
//	{
//		printf("*************************\n");
//		printf(" 1:add           2:sub \n");
//		printf(" 3:mul           4:div \n");
//		printf("*************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//使用函数指针数组的实现
//int add(int a, int b) {
//	return a + b;
//	
//}
//int sub(int a, int b) {
//	return a - b;
//}
//int mul(int a, int b) {
//	return a * b;
//}
//int div(int a, int b) {
//	return a / b;
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int(*p[5])(int x, int y) = { 0, add, sub, mul, div }; //转移表
//	while (input)
//	{
//		printf("*************************\n");
//		printf(" 1:add           2:sub \n");
//		printf(" 3:mul           4:div \n");
//		printf("*************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		if ((input <= 4 && input >= 1))
//		{
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//		}
//		else
//			printf("输入有误\n");
//		printf("ret = %d\n", ret);
//	}
//	return 0;
//}

//void test(const char* str) {
//	printf("%s\n", str);
//}
//int main()
//{
//	//函数指针pfun
//	void (*pfun)(const char*) = test;
//	//函数指针的数组pfunArr
//	void (*pfunArr[5])(const char* str);
//	pfunArr[0] = test;
//	//指向函数指针数组pfunArr的指针ppfunArr
//	void (*(*ppfunArr)[10])(const char*) = &pfunArr;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };//数组
//	int(*p)[10] = &arr;//取出数组的地址
//
//	int(*pf)(int, int);//函数指针
//	int(*pfarr[4])(int, int);//pfarr是一个数组-函数指针的数组
//	int(*(*ppfarr)[4])(int, int)=&pfarr;//ppfarr是一个指向【函数指针数组】的指针
//	//ppfarr是一个数组指针，指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针-int(*)(int,int)
//	
//	return 0;
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//指针数组
//	//int* arr[10];
//	//数组指针
//	//int* (*pa)[10] = &arr;
//	//函数指针
//	int (*padd)(int, int) = add;//&add
//	//int sum = (*padd)(1, 2);
//	//printf("sum=%d\n", sum);
//	//函数指针的数组
//	int (*parr[5])(int, int);
//	//指向函数指针数组的指针
//	int (*(*pparr)[5])(int, int)=&parr;
//}

//qsort

//void qsort(void* base,
//	size_t num,
//	size_t width,
//	int (*cmp)(const void* e1, const void* e2)
//);

//普通冒泡法
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz-1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[10] = { 9,38,33,6,45,4,32,43,31,13};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//	
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//	//比较名字就是比较字符串
//	//字符串比较不能直接用><=,应该用strcmp函数
//}
//
//cmp_float(const void* e1, const void* e2)
//{
//	/*if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else 
//		return -1;*/
//	//与下面等效
//
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,5.0,4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	
//	
//
//	//第一个参数：待排序数组的首元素地址
//	//第二个参数：待排序数组的元素个数
//	//第三个参数：待排序数组的每个元素的大小-单位是字节
//	//第四个参数：是函数指针，比较俩个元素的所用函数的地址-这个函数使用者自己实现	//
//	//			  函数指针的两个参数是：待比较的两个元素的地址
//
//}
//	//通用排序 既能接收整型 又能接收字符型排序
//void swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble2_sort(void* base, int sz, int width,int(*cmp)(void* e1,void* e2))
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟比较的对数
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//两个元素的比较
//			if (cmp((char*)base+j*width, (char*)base + (j+1) * width) > 0)
//			{
//				//交换数据
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//
//}
//
//
//void test4()
//{
//	int arr[10] = { 9,8,7,44,555,42,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble2_sort(arr,sz,sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void test5()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//bubble2_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	bubble2_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s ", s[i].name);
//		printf("%d ", s[i].age);
//	}
//}
//
//int main()
//{
//	//test1();
//	//test2();
//
//	//test3();
//	//test4();
//	test5();
//	
//	return 0;
//}

int main()
{
	//数组名是首元素的地址有两种情况
	//1，sizeof(数组名)-数组名表示整个数组
	//2，&数组名-数组名表示整个数组

	//整型数组
	// 
	//int a[] = { 1,2,3,4 };//4*4=16
	//printf("%d\n", sizeof(a));//4*4=16 sizeof(数组名)-计算的是数组总大小-单位是字节-16
	//printf("%d\n", sizeof(a + 0));//4或8 看系统 数组名这里表示首元素的值，a+0还是首元素的地址
	//printf("%d\n", sizeof(*a));   //4，首元素地址，*a是首元素
	//printf("%d\n", sizeof(a + 1));//4或8 a+1是第二个元素的地址
	//printf("%d\n", sizeof(a[1])); //4 a+1是第二个元素的大小
	//printf("%d\n", sizeof(&a));   //4或8 &a 取出的是数组的地址，地址的大小就是4/8个字节
	//printf("%d\n", sizeof(*&a));  //16 &a数组的地址，数组地址解引用访问的数组，sizeof计算的是数组的大小，单位是字节
	//printf("%d\n", sizeof(&a + 1));//4 &a是数组的地址，&a+1虽然跳过整个数组，但还是地址
	//printf("%d\n", sizeof(&a[0])); //4 第一个元素地址
	//printf("%d\n", sizeof(&a[0] + 1));//4 第二个元素地址


	//字符数组
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));// 6*1=6 计算数组大小
	printf("%d\n", sizeof(arr + 0));//4/8 首个元素的地址，+0还是首元素地址
	printf("%d\n", sizeof(*arr));//1   arr是首元素的地址，*arr就是首元素，首元素是字符，大小为一个字节
	printf("%d\n", sizeof(arr[1]));//1 第二个元素的大小
	printf("%d\n", sizeof(&arr));//4/8 数组的地址
	printf("%d\n", sizeof(&arr + 1));//4/8 下个数组的地址
	printf("%d\n", sizeof(&arr[0] + 1));// 4/8 数组第二个元素的地址
	printf("%d\n", strlen(arr));// 随机值 无'\0'
	printf("%d\n", strlen(arr + 0));//随机值
	printf("%d\n", strlen(*arr));//*arr——a——97 报错
	printf("%d\n", strlen(arr[1]));//*arr——b——98 报错
	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr + 1));//随机值-6
	printf("%d\n", strlen(&arr[0] + 1));//随机值-1

	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));//
	printf("%d\n", sizeof(arr + 0));//
	printf("%d\n", sizeof(*arr));//
	printf("%d\n", sizeof(arr[1]));//
	printf("%d\n", sizeof(&arr));//
	printf("%d\n", sizeof(&arr + 1));//
	printf("%d\n", sizeof(&arr[0] + 1));//
	printf("%d\n", strlen(arr));//
	printf("%d\n", strlen(arr + 0));//
	printf("%d\n", strlen(*arr));//
	printf("%d\n", strlen(arr[1]));//
	printf("%d\n", strlen(&arr));//
	printf("%d\n", strlen(&arr + 1));//
	printf("%d\n", strlen(&arr[0] + 1));//

	char* p = "abcdef";
	printf("%d\n", sizeof(p));//
	printf("%d\n", sizeof(p + 1));//
	printf("%d\n", sizeof(*p));//
	printf("%d\n", sizeof(p[0]));//
	printf("%d\n", sizeof(&p));//
	printf("%d\n", sizeof(&p + 1));//
	printf("%d\n", sizeof(&p[0] + 1));//
	printf("%d\n", strlen(p));//
	printf("%d\n", strlen(p + 1));//
	printf("%d\n", strlen(*p));//
	printf("%d\n", strlen(p[0]));//
	printf("%d\n", strlen(&p));//
	printf("%d\n", strlen(&p + 1));//
	printf("%d\n", strlen(&p[0] + 1));//
	return 0;
}