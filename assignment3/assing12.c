#include<stdio.h>

int main()

{
int base,index,power=1;
printf("enter the base   ");
scanf("%d",&base);
printf("enter the index");
scanf("%d",& index);

for (int i=1; i <= index ;i++)
{
power = base * power;


}
printf("%d ^ %d =>%d \n",base ,index, power);

	return 0;
	
}
