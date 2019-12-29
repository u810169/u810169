/*
===題目說明===
輸入兩個整數A、B，並輸出兩個整數間所有整數和
===輸入說明===
輸入兩個整數A、B (0<=A<B<=100)
===輸出說明===
輸出整數和
===範例輸入輸出===
*/

#include <stdio.h>

int main()
{
	int a,b;
	int i = 0;
	int sum = 0;
	printf("輸入兩個整數\n");
	scanf("%d%d" ,&a ,&b);
	for(i = a;i<=b;i++)
	{
		sum = sum + i ;
	}
	printf("整數和為%d",sum);
	return 0;
}
