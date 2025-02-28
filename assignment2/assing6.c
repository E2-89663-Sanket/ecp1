#include<stdio.h>

int main()
{

int rev=0, num,rem;
	
	printf("Enter The num : ");
	scanf("%d",&num);

int temp = num;


rev=0;
while( num != 0 )
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	printf("rev : %d \n",rev);

if(rev == temp )
		printf("Num is palindrome..\n");
	else
		printf("not palindrome \n");



return 0;

}
