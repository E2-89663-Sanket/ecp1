#include<stdio.h>

int main()
{
	int q , tgp;
	
	printf("Enter the quantity of goods :");
	scanf("%d" , &q);
	
	if ( q > 50 )
	{
		tgp = ( q * 5 );
		printf("Price of goods : %d \n", tgp);
		printf("Price of goodsAfter Discount = %d \n", ((q*5)-(q*5)*15/100) );
	}
	else if (q > 30 )
	{
		tgp = (q*5);
		printf("Price of Goods : %d \n", tgp);
		printf("Price of goods After Discount : %d \n", ((q*5)-(q*5)*10/100));
	}
	else if ( 30 > q )
	{
		tgp = (q*5);
		printf("Price of Goods : %d \n", tgp);
	}
	return 0;
}

 
