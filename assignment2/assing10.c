#include<stdio.h>



int main()
{
	char ch;
	printf("enter the char : ");
	scanf("%c",&ch); 	

	if( (ch >= 65 && ch <= 90)  || (ch >=97  &&  ch <= 122))
	{
		printf("It is alphabet..\n");
	
		if( ch >= 65 && ch <= 90  )
		
			printf("%c : uppercase char ..\n",ch);
		
		else
		
			printf("%c :lower case letter..\n ",ch);
	}		
	else if ( ch >=48 && ch <= '9')
	{
		printf("%c : num digit...\n",ch);
	}
	else if( ch == '\t'  || ch == 9)
	{
		printf("tab key....\n");
	}
	else if (ch == ' ' || ch == 32)
	{
		printf("space key...\n");
	}
	else if (ch == '\n' || ch == 10)
	{
		printf("enter key pressed..");
	}
	else
	{
		printf("Other key...\n");
	}

	return 0;
}

