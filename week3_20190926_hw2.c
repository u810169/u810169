/*
==�D�ػ���===
��J�T�Ӿ��ABC�A���O�N��T���Ϊ�����A�䤤A �� B �� C�A��X�ӤT���ά��U���B�����ζw���T����
===��J����===
��J�T�Ӿ��A�BB�BC (1000 �� A �� B �� C>0)
===��X����===
�Y���U���T���ΡA��X�o�ӤT���άO�U��der!
�Y�������T���ΡA��X�o�ӤT���άO����der yo~!
�Y���w���T���ΡA��X��~! ���O�w���T���ΡC
*/
#include <stdio.h>

int main()
{
	int a,b,c,n;
	printf("��J�T���Ϊ��T�����(�Ѥj��p)\n");
	scanf("%d%d%d",&a,&b,&c);	
	if(a*a<b*b+c*c)
	{
		printf("�o�ӤT���άO�U���T����");
	}
	else if(a*a==b*b+c*c)
	{
		printf("�o�ӤT���άO�����T����");
	}
	else if(a*a>b*b+c*c)
	{
		printf("�o�ӤT���άO�w���T����");
	}
	return 0;
}
