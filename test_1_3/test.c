﻿#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	unsigned char a = 200;
//	//1100 1000 0000 0000 0000 0000
//	unsigned char b = 100;
//	//0110 0100
//	unsigned char c = 0;
//	c = a + b;
//	//
//	printf(" %d %d", a + b, c);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
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
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if ((a * b * c * d * e == 120) && (a + b + c + d + e == 15))
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			} 
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	for (a = 0; a <=1;a++)
//	{
//		for (b = 0; b <=1; b++)
//		{
//			for (c = 0; c <=1; c++)
//			{
//				for (d = 0; d <=1; d++)
//				{
//					if ((a == 1) && (c == 1) && (d == 0) && (c == 0))
//					{
//						if (a + b + c + d == 3)
//							printf("%d %d %d %d", a, b, c, d);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//Murder()//谋杀案
//{
//    char k;//代表凶手
//    for (k = 'A'; k <= 'D'; k++)//让凶手四人分别去验证if条件，满足条件者就是凶手
//    {
//        if (3 == ((k != 'A') + (k == 'C') + (k == 'D') + (k != 'D')))//只有满足三个人说真话，一个假话，他们之和为3这个条件，就能确定此人是凶手
//        {
//            printf("凶手是：%c\n", k);
//        }
//    }
//
//}
//int main()
//{
//    Murder();//谋杀案
//    system("pause");
//    return 0;
//}
//void muder(void )
//{
//	char k = 0;
//	for (k = 'A'; k <= 'D'; k++)
//	{
//		if (((k != 'A') + (k == 'C') + (k == 'D') + (k != 'D')) == 3)
//			printf("凶手是%c", k);
//	}
//}
//int main()
//{
//	muder();
//	return 0;
//}
#include <stdio.h>

int main()
{
    int s = 1, h;                    // 数值和高度
    int i, j;                        // 循环计数
    scanf("%d", &h);                 // 输入层数
    printf("1\n");                   // 输出第一个 1
    for (i = 2; i <= h; s = 1, i++)         // 行数 i 从 2 到层高
    {
        printf("1 ");                // 第一个 1
        for (j = 1; j <= i - 2; j++)
        {// 列位置 j 绕过第一个直接开始循环
            //printf("%d ", (s = (i - j) / j * s));
            printf("%d ", (s = (i - j) * s / j));
        }
        printf("1\n");               // 最后一个 1，换行
    }
    getchar();                       // 暂停等待
    return 0;
}
﻿#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 20;
//	int b = -10;
//	//-10
//	//10000000000000000000000000001010 - 原码
//	//11111111111111111111111111110101 - 反码
//	//11111111 11111111 11111111 11110110 - 补码
//	//0xFF FF FF F6
//
//	//20
//	//00000000000000000000000000010100 - 原码
//	//00000000000000000000000000010100 - 反码
//	//00000000 00000000 00000000 00010100 - 补码
//	//0x00 00 00 14
//	//
//	return 0;
//}
//


//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = a - b;
//	//1-1
//	//1+(-1)
//	//00000000000000000000000000000001
//	//11111111111111111111111111111111
//	//00000000000000000000000000000000
//	// 
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	return 0;
//}
//

//int main()
//{
//	int a = 0x11223344;
//
//	return 0;
//}

//设计一个小程序来判断当前机器的字节序

//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (1 == *p)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}

//小端：返回1
//大端：返回0

//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//}
//
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}
//
//
//
//#include <stdio.h>
//
//int main()
//{
//	char a = -1;
//	//-1 是整数，32bit
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//11111111 - a  截断
//	//11111111111111111111111111111111 - 提升
//	//
//	signed char b = -1;
//	unsigned char c = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//00000000000000000000000011111111
//	//
//	//      -1    -1   
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	//%d是打印有符号的整数
//	//
//	return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000 -128的补码
//	//10000000 - a
//	//11111111111111111111111110000000
//	//
//	printf("%u\n", a);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char a = 128;
//	//128
//	//00000000000000000000000010000000
//	//10000000 - a
//	//11111111111111111111111110000000
//	//
//	printf("%u\n", a);
//	return 0;
//}
//
//int main()
//{
//	char a = 128;
//	printf("%d\n", a);
//
//	return 0;
//}
//
//
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	//10000000000000000000000000010100
//	//11111111111111111111111111101011
//	
//	//11111111111111111111111111101100
//	//00000000000000000000000000001010
//	//11111111111111111111111111110110 - 补码
//	//11111111111111111111111111110101
//	//10000000000000000000000000001010
//	//-10
//	printf("%d\n", i + j);
//
//	return 0;
//}
#include <windows.h>

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//128 + 127 
//	//-1 -2 -3 -4 -5 .. -128 127 126 .... 5 4 3 2 1 0 -1 -2 ...
//	printf("%d", strlen(a));//'\0' -- 0
//	//
//	return 0;
//}

//#include <stdio.h>
//unsigned char i = 0;//0~255
//
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//
//	printf("n的值为：%d\n", n);//9
//	printf("*pFloat的值为：%f\n", *pFloat);//9.0
//
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);//9
//	printf("*pFloat的值为：%f\n", *pFloat);//9.0
//	return 0;
//}
//
//
//int main()
//{
//	float f = 3.14;
//
//	//0.14
//	//0.125
//	//0.015
//	//11.001....01010000010101010101010101010
//	// 
//	//float f = 9.0;
//	//1001.0
//	//(-1) ^ 0 * 1.001 *2^3
//	//s = 0
//	//e = 3
//	//M = 1.001
//	//0100 0001 0001 00000000000000000000
//	//0x41 10 00 00
//	// 
//	//float f = 5.5f;
//	//101.1
//	//1.011 *2^2
//	//(-1)^0 *1.011 * 2^2
//	//s=0
//	//m=1.011
//	//e=2
//	//0 10000001 01100000000000000000000
//	//
//	//40 b0 00 00
//	//
//	return 0;
//}



int main()
{
	int n = 9;
	//00000000000000000000000000001001 - 9的补码
	//0 00000000 00000000000000000001001
	//(-1)^0 * 0.00000000000000000001001 * 2^-126
	//0.000000

	float* pFloat = (float*)&n;

	printf("n的值为：%d\n", n);//9
	printf("*pFloat的值为：%f\n", *pFloat);//0.000000


	*pFloat = 9.0;
	//1001.0
	//(-1)^0 * 1.001 * 2^3
	//s=0
	//e=3
	//m=1.001
	//01000001000100000000000000000000
	//
	printf("num的值为：%d\n", n);//1,091,567,616
	printf("*pFloat的值为：%f\n", *pFloat);//9.0
	return 0;
}




