/*
===�D�ػ���===
��J��Ӿ��A�BB�A�ÿ�X��Ӿ�ƶ��Ҧ���ƩM
===��J����===
��J��Ӿ��A�BB (0<=A<B<=100)
===��X����===
��X��ƩM
===�d�ҿ�J��X===
*/

#include <stdio.h>

int main()
{
	int a,b;
	int i = 0;
	int sum = 0;
	printf("��J��Ӿ��\n");
	scanf("%d%d" ,&a ,&b);
	for(i = a;i<=b;i++)
	{
		sum = sum + i ;
	}
	printf("��ƩM��%d",sum);
	return 0;
}
