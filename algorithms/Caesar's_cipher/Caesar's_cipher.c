#include <stdio.h>
#include <string.h>
void main()
{
	char msg[100],ch[5];
	int step=0;
	int i,len=0;
	printf("Enter encrypted message: ");
	gets(msg);
	printf("Enter \"CLUE\": ");
	gets(ch);
	step = (-1)*(ch[0]-'C');
	len = strlen(msg);
	printf("Decoded message is .....\n");
    for(i=0;i<len;i++)
    {
    	if(msg[i]==' ')
    	{
    		printf("%c",msg[i]);
    		continue;
		}
    	if(msg[i]+step >= 'A'&&msg[i]+step <='Z')
            printf("%c",msg[i]+step);
    	else if(msg[i]+step >'Z')
            printf("%c",msg[i]+step-'Z'+'A'-1);
    	else if(msg[i]+step <'A')
            printf("%c",'Z'-('A'-msg[i]-step) + 1);
	}
}
