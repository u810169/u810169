/*===�D�ػ���===
��@�ӥ���� N �Ө��A�N�����F�����H�~�Ҧ����]�ƥ[�_�Ӫ��`�M�� S�A
�p�G S>N�A�h N ���ռơA�p�G S<N�A�h N �����ơA�p�G S=N�A�h N ��������(Perfect Number)�C
�Ҧp 10 ���]�Ʀ� 1�B2�B5�B10�A1+2+5=8<10�A�]��10 �����ơC
===��J����===
�L
===��X����===
��X�Ӿ�ư��F�����ۤv���Ҧ��]�ơA�çP�O���O�ռơB���ơB�٬O������
===�d�ҿ�J��X*/
#include <stdio.h>
int main()
{	
	int N ;
    int s = 0;
    int S = 0;
    int i;
    printf("��J�@�ӥ����");
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
	printf("���]��\n");
	if(S>N)
	{
		printf("%d > %d ���ռ�", S, N); 
	}
	else if(S<N)
	{
		printf("%d < %d ������", S, N);  
	}
	else
	{
		printf("%d = %d ��������", S, N);  
	}
	return 0;
}
