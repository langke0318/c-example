#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);//ptr ��ָ��������һ����ַ
//	printf("%p,%d,%d,%d", a,*a,*(a + 2), *(ptr -2));//*��a+n)��ʾָ��ڣ�n+1����Ԫ�أ�ͬ��*��ptr-n)��ʾ��ǰָ���n��Ԫ��
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣��ṹ��Ĵ�С��20���ֽ�
//int main()
//{
//	p = (struct Test*)0x00100000;
//	printf("%p\n", p );//0x00100000
//	printf("%p\n", p + 0x1);//0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x00100000 //ת��������+1 1048576+1
//	printf("%p\n", (unsigned int*)p + 0x1);//0x00100000 //ת��������ָ���1 ���Ǽ�4���ֽ�
//	return 0;
//}
//
//int main()
//{
//int a[4] = { 1, 2, 3, 4 };
//int* ptr1 = (int*)(&a + 1);//����a����һ����ַ
//int* ptr2 = (int*)((int)a + 1);//a��һ��Ԫ�صĵ�ַ����������1��ת���ɵ�ַ��
//printf("%p,%d\n", a, *a);
//printf("%d,%d\n", ptr1[-1], *ptr2);
//printf("%x,%x\n", ptr1[-1], *ptr2);
//
//
//return 0; 
//}

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//���ű��ʽֻ������������
//	int b[3][2] = { {0,1},{2,3},{4,5} };
//	int* p;
//	int* p2;
//	p = a[0];
//	p2 = b[0];
//	printf("%d\n", p[0]);
//	printf("%d", p2[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];// == *(*(p+4)+2)
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//-4 Դ�� 10000000 00000000 00000000 00000100 ���룺11111111 11111111 11111111 11111011 ���룺11111111 11111111 11111111 11111100 ת���ɵ�ַ��0XFF FF FF FC ��ֵ��-4 
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));//==aa[1] �ڶ�����Ԫ�ص�ַ
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}
//
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	/*pa++;
//	pa++;*/
//	printf("%s\n", *pa);
//	return 0;
//}

int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);//==* *(cpp-2) +3
	printf("%s\n", cpp[-1][-1] + 1);//*(*cpp-1)-1)+1
	return 0;
}