#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7*1 ����\0 sizeof(arr)���������Ĵ�С����λ���ֽ�
	//printf("%d\n", sizeof(arr + 0));// 4/8  ��Ԫ�ص�ַ
	//printf("%d\n", sizeof(*arr));//1 *arr ��Ԫ�صĴ�С
	//printf("%d\n", sizeof(arr[1]));// 1 �ڶ���Ԫ�صĴ�С	
	//printf("%d\n", sizeof(&arr));//4/8 ����ĵ�ַ
	//printf("%d\n", sizeof(&arr + 1));//4/8 ����������¸�����ĵ�ַ
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 �ڶ���Ԫ�صĵ�ַ

	//printf("%d\n", strlen(arr));// 6 ������\0 
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));//err  �Ƿ������ڴ� ��a��=97
	////printf("%d\n", strlen(arr[1]));//err  �Ƿ������ڴ� ��b��=98
	//printf("%d\n", strlen(&arr));//6 &arr-����ĵ�ַ-����ָ�� char(*p)[7]=&arr
	//printf("%d\n", strlen(&arr + 1));//���ֵ
	//printf("%d\n", strlen(&arr[0] + 1));//5 "b,c,d,e.f"
	
	//char* p = "abcdef";
	//printf("%d\n", sizeof(p));//4/8 ����ָ�����P�Ĵ�С
	//printf("%d\n", sizeof(p + 1));//4/8 b�ĵ�ַ
	//printf("%d\n", sizeof(*p));//1 *p -a �ַ����ĵ�һ���ַ�
	//printf("%d\n", sizeof(p[0]));//1 a�Ĵ�С int arr[10]; arr[0]== *(arr+0) p[0]== *(p+0)
	//printf("%d\n", sizeof(&p));//4/8 a�ĵ�ַ
	//printf("%d\n", sizeof(&p + 1));//4/8 �¸�����ĵ�ַ
	//printf("%d\n", sizeof(&p[0] + 1));//4/8 b�ĵ�ַ

	//printf("%d\n", strlen(p));//6 �ַ�����С abcdef
	//printf("%d\n", strlen(p + 1));// 5 bcdef
	//printf("%d\n", strlen(*p));//err
	//printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));//���ֵ ��ַ ����0��ͣ
	//printf("%d\n", strlen(&p + 1));//���ֵ ��ַ ����0��ͣ
	//printf("%d\n", strlen(&p[0] + 1));//5 bcdef

	//��ά����
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));// 48 3*4*4 
	printf("%d\n", sizeof(a[0][0]));//4 ��һ�� ��һ�� Ԫ�ش�С
	printf("%d\n", sizeof(a[0]));//16 ��һ�� 4*4 
	printf("%d\n", sizeof(a[0] + 1));//4 ��һ�� �ڶ���Ԫ��
	printf("%d\n", sizeof(*(a[0] + 1)));//4 ��һ�� �ڶ���Ԫ��
	printf("%d\n", sizeof(a + 1));//4/8  a�Ƕ�λ�������������û��sizeof������������Ҳû��&����������������a����Ԫ�ص�ַ���Ѷ�ά���鿴��һά����ʱ����ά�������Ԫ���ǵ�һ�У�a���ǵ�һ�У���Ԫ�أ��ĵ�ַ
	//a+1���ǵڶ��еĵ�ַ
	printf("%d\n", sizeof(*(a + 1)));//16 �ڶ��д�С
	printf("%d\n", sizeof(&a[0] + 1));//4/8 �ڶ��е�ַ
	printf("%d\n", sizeof(*(&a[0] + 1)));//16 �ڶ��д�С
	printf("%d\n", sizeof(*a));//16 ��һ�д�С
	printf("%d\n", sizeof(a[3]));//16 

	return 0;
}
