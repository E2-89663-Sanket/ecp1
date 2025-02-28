#include<stdio.h>

int main()
{
	  int n1,n2,res;
	  char op;
	  printf("Enter the num : ");
	  scanf("%d",&n1);
	  printf("Enter oprator : ");
	  scanf("%*c%c",&op);
	  printf("Enter the num2 : ");
	  scanf("%d",&n2);
	  switch( op )
  {
	case '+' :printf(" %d  +  %d   = %d  \n",n1,n2,n1+n2);
			  break;
	case '-' :printf(" %d  -  %d   = %d  \n",n1,n2,n1-n2);
			  break;
	case '*' :printf(" %d  *  %d   = %d  \n",n1,n2,n1*n2);
			  break;
	case '/' :if(n2 != 0)
				printf(" %d  /  %d   = %d  \n",n1,n2,n1/n2);
			  else
				printf("Divide by zero error");
			  break;
	default:printf("Invalid Oprator..+ - * /  \n");
  }


  return 0;
}
