/*===題目說明===
對一個正整數 N 而言，將它除了本身以外所有的因數加起來的總和為 S，
如果 S>N，則 N 為盈數，如果 S<N，則 N 為虧數，如果 S=N，則 N 為完全數(Perfect Number)。
例如 10 的因數有 1、2、5、10，1+2+5=8<10，因此10 為虧數。
===輸入說明===
無
===輸出說明===
輸出該整數除了本身自己的所有因數，並判別它是盈數、虧數、還是完全數
===範例輸入輸出*/
#include <stdio.h>
int main()
{	
	int N ;
    int s = 0;
    int S = 0;
    int i;
    printf("輸入一個正整數");
    scanf("%d",&N);
	for(i=1;i<N;i++)
	{
		s = N%i;
		if(s==0)
		{
			S += i;
			printf("%d ", i);
		}
	}
	printf("為因數\n");
	if(S>N)
	{
		printf("%d > %d 為盈數", S, N); 
	}
	else if(S<N)
	{
		printf("%d < %d 為虧數", S, N);  
	}
	else
	{
		printf("%d = %d 為完全數", S, N);  
	}
	return 0;
}
