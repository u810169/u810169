/*
===�D�ػ���===
���@�إ[�K�覡�A�u�n����X���C�Ӧr���[�W���K�A�N��o��K�X���r���C�YK=2�A����apple�g�L�[�K��N�ܦ�crrng�C
���D�ت�K�ȡA�Цۦ�ѷӽd�ҿ�J�νd�ҿ�X���X�ӧa�I
===��J����===
�C�����ո�Ƥ@�C�C�C�C��1�Ӧr��A�N�O�ݭn�ѱK�����X�C�r��
���X�αK�X�r���@�w�ݦbASCII�X���i�C�L���d�򤺡C
===��X����===
��C�@���ո�ơA�п�X�ѱK�᪺�K�X�C
*/
#include <stdio.h>
#include <string.h>
int main()
{
	int k = 'P' - 'I';
	int i;
	int n;
	printf("�п�J�K�X����: ");
	scanf("%d", &n);
	printf("'P' - 'I' = %d, �ҥH k = %d\n", k, k);
	char plain[n];
	char passwd[n];
	printf("�п�J�K�X: ");
	scanf("%s",plain);
	for(i=0; i<n; i++)
	{
		if(i<strlen(plain))
			passwd[i] = *(plain+i)-k;
		else
			passwd[i] = '\0';
	}
	printf("��l���X�O: ");
	printf(passwd);
	return 0;
}
