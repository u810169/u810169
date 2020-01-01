#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[50];
	int result;
	int strCount;	
	int i;
	int j;
	char valid;
	printf("請輸入字串個數: ");
	scanf("%d", &strCount);	
	for(j=0; j<strCount; j++)
	{
		valid = 'Y';
		printf("請輸入字串: ");
	    for(i=0;i<50;i++)
	    {
		    str[i]='\0';
	    }
		scanf("%s", str);
		for(i=0; i<50; i++)
		{
			if(str[i]!='\0')
			{
				if(str[i]>='A' && str[i]<='Z')
				{				
					valid = 'Y';
				}
				else
				{
					valid = 'N';					
					break;
				}
			}
		}
		if(valid=='N')
		{
			printf("請輸入大寫字母 !!\n");
		}
		else
		{
			for(i=1; i<50; i++) 
		    {
		    	if(str[i]!='\0')
		    	{
		    		result = abs(str[i] - str[i-1]);
		    		if(result>=10)
		    		{
		    			printf("字母之間的距離不能超過10 !!");
		    			break;
					}
		    		printf("%d", result);
				}
				else
				{
					printf("\n");
					break;
				}
		    }
		}
	}
	
	
	return 0;
}
