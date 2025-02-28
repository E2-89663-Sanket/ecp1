#include<stdio.h>

int main()
{
int n1,n2,n3;
	printf("Enter 3 Num : ");
	scanf("%d%d%d",&n1,&n2,&n3);
	if( n1 > n2   )
	{
		
		if( n1 > n3 )
		{
		printf("Max Num  N1 = %d \n",n1);
		}
		else
		{
		printf("Max Num  N3 = %d \n",n3);
		}
	}

	else
	{
		
		if( n2 > n3  )
		printf("Max Num  N2 = %d \n",n2);
		else
		printf("Max Num  N3 = %d \n",n3);
	}

printf("n1") :(n1 > n2 ) ? ((n1 > n3)?printf("N1\n") : printf("n3\n"))   : ((n2 > n3)? printf("n2\n"):printf("n3\n") )  ;

	return 0;
}
