/*
===題目說明===
有一種加密方式，只要把明碼的每個字元加上整數K，就能得到密碼的字元。若K=2，那麼apple經過加密後就變成crrng。
本題目的K值，請自行參照範例輸入及範例輸出推出來吧！
===輸入說明===
每筆測試資料一列。每列有1個字串，就是需要解密的明碼。字串
明碼及密碼字元一定需在ASCII碼中可列印的範圍內。
===輸出說明===
對每一測試資料，請輸出解密後的密碼。
*/
#include <stdio.h>
#include <string.h>
int main()
{
	int k = 'P' - 'I';
	int i;
	int n;
	printf("請輸入密碼長度: ");
	scanf("%d", &n);
	printf("'P' - 'I' = %d, 所以 k = %d\n", k, k);
	char plain[n];
	char passwd[n];
	printf("請輸入密碼: ");
	scanf("%s",plain);
	for(i=0; i<n; i++)
	{
		if(i<strlen(plain))
			passwd[i] = *(plain+i)-k;
		else
			passwd[i] = '\0';
	}
	printf("原始明碼是: ");
	printf(passwd);
	return 0;
}
