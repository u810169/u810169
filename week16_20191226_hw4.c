/*
===�D�ػ���===
���w�@�ռƦr�A�íp��o�@�ռƦr���_�Ʀ�ƪ��`�M��Ҧ����Ʀ�ƪ��`�M�A
�A��_�Ʀ���`�M����Ʀ���`�M������ȯ��K�t�����G
===��J����===
��J�@�ռƦr
===��X����===
��X���K�t�����G
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
	char num_str[2];
	printf("�п�J�@�ռƦr");
	scanf("%d", &num);
	/* sprintf() �N����ର�r�� */
	sprintf(str, "%d", num);
	printf("�Ʀr��r��O %s\n", str);
	/* strlen() �p��r����� */
	len = strlen(str);
	printf("���׬O %d\n", len);
	printf("�C�@�ӼƦr���O�O\n");
	for(i=0;i<len;i++)
	{
		if((i+1)%2==0)
		{			 
			num_str[0] = str[i];
			num_str[1] = '\0';
			/* atoi() �N�r���ର��� */
			sum_even += atoi(num_str);
			printf("%c is even\n",str[i]);
		}
		else
		{
			num_str[0] = str[i];
			num_str[1] = '\0';		
			/* atoi() �N�r���ର��� */
			sum_odd += atoi(num_str);
			printf("%c is odd\n",str[i]);
		}		
	}
	
	printf("even is %d\n", sum_even);
	printf("odd is %d\n", sum_odd);
	
	secret = abs(sum_even - sum_odd);
	printf("���K�t�O %d\n", secret);
	
	return 0;
}


