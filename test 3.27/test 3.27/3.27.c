#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	/*char a = -128;
	signed char b = -1;
	unsigned char c = -1;
	printf("a=%u b=%d c=%d\n", a, b, c);
	*///printf("a=%char* b=%char* c=%char*\n", a, b, c);
	//printf("a=%lf b=%lf c=%lf\n", a, b, c);


	////�޷�����������0����ѭ��
	//unsigned int i;
	//for (i = 9; i >= 0; i--)
	//{
	//	printf("%u\n", i);
	//}

	//char ��Χ-128-127 
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)//������-128--127��ѭ��
	{
		a[i] = -1 - i;
		printf("%d ", a[i]);
	}
	printf("%d\n ", strlen(a));//char �������255
	
	return 0;

}