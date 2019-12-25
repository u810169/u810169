/*
==題目說明===
輸入三個整數ABC，分別代表三角形的邊長，其中A ≧ B ≧ C，輸出該三角形為銳角、直角或鈍角三角形
===輸入說明===
輸入三個整數A、B、C (1000 ≧ A ≧ B ≧ C>0)
===輸出說明===
若為銳角三角形，輸出這個三角形是銳角der!
若為直角三角形，輸出這個三角形是直角der yo~!
若為鈍角三角形，輸出嗯~! 它是鈍角三角形。
*/
#include <stdio.h>

int main()
{
	int a,b,c,n;
	printf("輸入三角形的三個邊長(由大到小)\n");
	scanf("%d%d%d",&a,&b,&c);	
	if(a*a<b*b+c*c)
	{
		printf("這個三角形是銳角三角形");
	}
	else if(a*a==b*b+c*c)
	{
		printf("這個三角形是直角三角形");
	}
	else if(a*a>b*b+c*c)
	{
		printf("這個三角形是鈍角三角形");
	}
	return 0;
}
