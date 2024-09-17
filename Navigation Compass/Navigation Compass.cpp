//#include "iostream.h"
/*
* 轮盘1：每次转动一格的轮盘
* 轮盘2：每次转动两格的轮盘
* 轮盘3：每次转动四格的轮盘
* x:轮盘1和轮盘2联动旋转次数
* y:轮盘1和轮盘3联动旋转次数
* z:轮盘2和轮盘3联动旋转次数
* a:轮盘1和终点距离格子数
* b:轮盘2和终点距离格子数
* c:轮盘3和终点距离格子数
* (1*(x+y))%6=a
* (2*(x+z))%6=b
* (4*(y+z))%6=c
*/
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"
int main()
{
	unsigned int x, y, z, a, b, c;
	printf("\r\n每次转动1格和终点距离格子数:");
	scanf_s("%d",&a);
	printf("\r\n每次转动2格和终点距离格子数:");
	scanf_s("%d",&b);
	printf("\r\n每次转动4格和终点距离格子数:");
	scanf_s("%d",&c);
	for (z = 0; z < 100; z++)
	{
		for (y = 0; y < 100; y++)
		{
			for (x = 0; x < 100; x++)
			{
				if (((4 * (y + z)) % 6 == c) && ((2 * (x + z)) % 6 == b) && ((1 * (x + y)) % 6 == a))
				{

					printf("\r\n轮盘1和轮盘2联动旋转次数：%d", x);
					printf("\r\n轮盘1和轮盘3联动旋转次数：%d", y);
					printf("\r\n轮盘2和轮盘3联动旋转次数：%d\r\n", z);
					system("pause");
					return 0;
				}
			}
		}
	}
	
}