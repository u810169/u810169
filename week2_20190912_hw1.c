/*
1.輸入兩個浮點數，分別是三角形的底和高，並計算其面積
===題目說明=== 
輸入兩個浮點數，分別代表三角形的底和高，並計算其面積 
===輸入說明===
輸入兩個浮點數b、h，分別代表底和高
===輸出說明===
輸出一串字串 "三角形的面積為:" 再換行輸出 
*/

#include <stdio.h>

int main()
{
	int b=0, h=0;
	float a=0;
	printf("輸入兩個浮點數b、h，分別代表底和高\n");
	scanf("%d %d", &b, &h);
	a=b*h/2;
	printf("三角形的面積為:%f", a);
	return 0;
}
