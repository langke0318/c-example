#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <Windows.h>


//������
//��Ŀ���ݣ�
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E����;
//Cѡ��˵���ҵ�һ��D�ڶ�;
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//

//int main()
//{
//	int a = 0;
//	int	b = 0;
//	int	c = 0;
//	int	d = 0;
//	int	e = 0;
//
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							 ((b == 2) + (e == 4) == 1) &&
//							 ((c == 1) + (d == 2) == 1) &&
//							 ((c == 5) + (d == 3) == 1) &&
//							 ((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120) 
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							}
//								
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}

//��Ŀ���ݣ�
//ʵ��һ�����������������ַ����е�K���ַ�

//���磺ABCD ����һ���ַ�Ϊ BCDA
//      ABCD ���������ַ�Ϊ CDAB

left_move(char arr[], int k)// (char* arr.int k)��Ч
{

}

int main()
{
	char arr[] = "abcdef";
	left_move(arr, 2);

	printf("%s\n", arr);
	return 0;
}