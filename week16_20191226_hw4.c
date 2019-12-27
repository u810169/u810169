/*
===題目說明===
給定一組數字，並計算這一組數字的奇數位數的總和跟所有偶數位數的總和，
再把奇數位數總和減掉偶數位數總和的絕對值秘密差的結果
===輸入說明===
輸入一組數字
===輸出說明===
輸出秘密差的結果
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int num = 0;
	char str[30];
	int len = 0;
	int i;
	int sum_odd = 0;
	int sum_even = 0;
	int secret = 0;
	printf("請輸入一組數字");
	scanf("%d", &num);
	/* sprintf() 將整數轉為字串 */
	sprintf(str, "%d", num);
	printf("數字轉字串是 %s\n", str);
	/* strlen() 計算字串長度 */
	len = strlen(str);
	printf("長度是 %d\n", len);
	printf("每一個數字分別是\n");
	for(i=0;i<len;i++)
	{
		if((i+1)%2==0)
		{			 
			sum_even += (str[i] - 48);
			printf("%c is even\n",str[i]);
		}
		else
		{			
			sum_odd += (str[i] - 48);
			printf("%c is odd\n",str[i]);
		}		
	}
	
	printf("even is %d\n", sum_even);
	printf("odd is %d\n", sum_odd);
	
	secret = abs(sum_even - sum_odd);
	printf("秘密差是 %d\n", secret);
	
	return 0;
}


