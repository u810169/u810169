/*
===題目說明===
輸入一個整數，之後把這個整數每個位數相反順序印出來
===輸入說明===
輸入一個整數A (0<A<100000)
===輸出說明===
將數字的每位數相反順序印出來
===範例輸入輸出===
*/

#include <stdio.h>
int main()
{
	int i;	
	int result = 0;
	char numStr[5] = {'\0','\0','\0','\0','\0'};
	printf("請輸入整數\n");
	scanf("%s", numStr);
	printf("相反順序是 ");
	for(i=5; i>0; i--)
	{
		if(numStr[i-1] != '\0')
			printf("%c", numStr[i-1]);	
	}	
	return 0;
}
