#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;//*(pulPtr + 3)��ʾָ������Ų3��λ�ã���Ԫ��9��+=3 ��ʾԪ��9+3=12��
//	printf("%d,%d\n", *pulPtr,*(pulPtr + 3));
//	return 0;
//}

//дһ������ �ַ�������
//#include <assert.h> //��������
//char reverse(char* str)
//{
//	assert(str);//���� �ж�������Ч��
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
//	//scanf("%s", arr);//ȱ�� �����ո��ֹͣ���� ʹ��gets�����滻
//	gets(arr);//gets������ȡһ������
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}


//��������֮�� x+xx+xxx+xxxx+xxxxx+...
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

//ˮ�ɻ��� 0-100000
//ָһ��n λ��������ÿ��λ�ϵ����ֵ� n����֮�͵������������磺1^3 + 5^3+ 3^3 = 153��
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
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1,����i��λ��  nλ��
//		int tmp = i;
//		int sum = 0;
//		int n = 1;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		
//		//2������i��ÿһλ��n�η�֮�� sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);//pow��x,y�� ����x��y�η�
//			tmp /= 10;
//
//		}
//
//
//		//3���Ƚ�i == sum
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

//��ӡ����*
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//
//	//��ӡ�ϲ���
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�²���
//	for (i = 0; i < line-1; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * (line-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ һ�����Ժȶ�����ˮ

int main()
{
	int money = 0;
	scanf("%d", &money);
	int price = 1;//����
	int total = 0;//����-����ˮ����
	int empty = 0;//����-��ƿ��

	//���������ˮ
	total = money / price;//��һ������ƿ��=Ǯ/����
	empty = money;//��һ�κ��꣺ƿ��=Ǯ/����=total

	//����������ˮ
	while (empty>=2)
	{
		total += empty / 2;
		empty=empty / 2+empty%2;//2ƿ��1ƿ+�����ʣ�µļ����ȴ��һ�

	}

	//������
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