#include <stdio.h>
#define COUNT 50
int main()
{
	int i;
	int result = 1;
	char numStr[COUNT];
	for(i=0; i<COUNT; i++)
	{
		numStr[i] = '\0';	
	}	
	printf("�п�J�Ʀr��, �U�դ����H,�۹j: ");	
	scanf("%s", numStr);
	for(i=0; i<COUNT; i++)
	{	
		if(numStr[i]==',')
		{
			printf("%d\n", result);
			result = 1;
		}
		else if(numStr[i]=='\0')
		{
			printf("%d", result);
			break;
		}
		else
		{
			result = result * (numStr[i]-48);
		} 
	}
	return 0;
}
	
