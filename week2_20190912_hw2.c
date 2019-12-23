/*
2.輸入英里數，將英里轉成公里
===題目說明=== 
輸入英里數，將英里轉成公里 
===輸入說明===
輸入一浮點數a，代表英里 
===輸出說明===
輸出一串字串 "英里轉公里為:b" 再換行輸出 
公式: 公里=1.61*英里 
*/

#include <stdio.h>

int main()
{
	float a=0, b=0;
	printf("輸入一浮點數a，代表英里");
	scanf("%f", &a);
	b=1.61*a;
	printf("英里轉公里為:b\n%f", b);
	return 0;
}
