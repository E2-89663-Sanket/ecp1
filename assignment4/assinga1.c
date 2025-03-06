#include<stdio.h>


int accept(void);

int sum(int, int);

void display(int);

int sub(int ,int);

int mul(int, int);

int div(int, int);




	int main()
{

	typedef enum cal{EXIT, ADD, SUB, MUL, DIV} CAL;
	
	CAL choi;
	int n1,n2,n3,res;
	do 
	{
		n1= accept();
		n2= accept();
		printf("0.EXIT\n 1.ADD\n 2.SUB\n 3.MUL\n 4.DIV\n");
		printf("enter choice:");
		scanf("%d", &choi);

			switch(choi)
		{
			case EXIT:
				printf("exit code.\n");
				break;
			case ADD:
				res = sum(n1,n2);
				display_res(res);
				break;
			case SUB:
				res = sub(n1,n2);
				display_res(res);
				break;
			case MUL:
				res = mul(n1,n2);
				display_res(res);
				break;
			case DIV:
				res = div(n1,n2);
				display_res(res);
				break;

		}
	}
	while(choi != EXIT);
	return 0;

}




int sub (int a, int b)
{	
	int res;
	res = a-b;
	return res ;
}

	void display_res(int res)
{
	printf("res = %d \n",res);

}



	int accept()
{
	int num;
	printf("enter num:");
	scanf("%d", &num);
	return num;
}


int mul(int a, int b)
{
	int res;
	return a*b;
}




int sum(int a, int b)
{
	
	return a+b;
}


int div(int a, int b)
{
	int res;
	res= a/b;
	return res;
}









