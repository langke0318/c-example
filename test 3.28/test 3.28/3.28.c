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
//		printf("%d ", *(arr[i]));//������ ȡֵ
//		printf("0x%x ", arr[i]);//ȡ��ַ
//
//	}
//
//	return 0;
//}


//����������
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
////������ָ��
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
//	//������arr����ʾ��Ԫ�صĵ�ַ
//	//���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
//	//�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
//	//��������ָ��������
//	print_arr2(arr, 3, 5);
//	printf("%d ", z);
//	return 0;
//}

//����1 
// (*(void (*)())0)();
// 
//����2
//void (*signal(int, void(*)(int)))(int);
//��Ϊ
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
//˵����

//signal ��һ����������
//signal �����Ĳ�����2������һ����int,�ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//signal �����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����int������������void
