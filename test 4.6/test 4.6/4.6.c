#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;//*(pulPtr + 3)表示指针往后挪3个位置，至元素9，+=3 表示元素9+3=12，
//	printf("%d,%d\n", *pulPtr,*(pulPtr + 3));
//	return 0;
//}

//写一个函数 字符串逆序
//#include <assert.h> //断言引用
//char reverse(char* str)
//{
//	assert(str);//断言 判断数组有效性
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	//return str;
//}
//
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);//缺陷 遇到空格就停止输入 使用gets函数替换
//	gets(arr);//gets函数读取一行输入
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}


//计算数字之和 x+xx+xxx+xxxx+xxxxx+...
//int main()
//{
//	int a = 0,b=0;
//	int ret = 0;
//	int sum = 0;
//	int i = 0;
//	scanf("%d%d", &a, &b);
//
//	for (i = 0; i < b; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	
//	printf("%d", sum);
//	return 0;
//
//}

//水仙花数 0-100000
//指一个n 位数，它的每个位上的数字的 n次幂之和等于它本身（例如：1^3 + 5^3+ 3^3 = 153）
#include <math.h>
//int main()
//{
//	
//	
//	int i = 0;
//	
//
//	for (i = 0; i <= 100000; i++)
//		
//	{
//		
//		//判断i是否为水仙花数
//		//1,计算i的位数  n位数
//		int tmp = i;
//		int sum = 0;
//		int n = 1;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		
//		//2，计算i的每一位的n次方之和 sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);//pow（x,y） 计算x的y次方
//			tmp /= 10;
//
//		}
//
//
//		//3，比较i == sum
//		
//		if (i==sum  )
//		{
//			printf("%d ", i);
//		}
//	}
//	
//
//	return 0;
//}

//int main()
//{
//	int a= 0;
//	
//	scanf("%d", &a);
//	
//	printf("%d,%d ",a/10,a%10);
//	return 0;
//}

//打印菱形*
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//
//	//打印上部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下部分
//	for (i = 0; i < line-1; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * (line-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水 一共可以喝多少汽水

int main()
{
	int money = 0;
	scanf("%d", &money);
	int price = 1;//单价
	int total = 0;//计数-买汽水总数
	int empty = 0;//计数-空瓶数

	//买回来的汽水
	total = money / price;//第一次买：总瓶数=钱/单价
	empty = money;//第一次喝完：瓶数=钱/单价=total

	//换回来的汽水
	while (empty>=2)
	{
		total += empty / 2;
		empty=empty / 2+empty%2;//2瓶换1瓶+换完后剩下的继续等待兑换

	}

	//方法二
	if (money == 0)
	{
		total = 0;

	}
	else
	{
		total = 2 * money - 1;
	}
	
	printf("%d ", total);
	return 0;
}