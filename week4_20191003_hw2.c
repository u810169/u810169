/*
===�D�ػ���===
��J�@�Ӿ�ơA�����o�Ӿ�ƨC�Ӧ�Ƭۤ϶��ǦL�X��
===��J����===
��J�@�Ӿ��A (0<A<100000)
===��X����===
�N�Ʀr���C��Ƭۤ϶��ǦL�X��
===�d�ҿ�J��X===
*/

#include <stdio.h>
int main()
{
	int i;	
	int result = 0;
	char numStr[5] = {'\0','\0','\0','\0','\0'};
	printf("�п�J���\n");
	scanf("%s", numStr);
	printf("�ۤ϶��ǬO ");
	for(i=5; i>0; i--)
	{
		if(numStr[i-1] != '\0')
			printf("%c", numStr[i-1]);	
	}	
	return 0;
}
