#include <stdio.h>
int main()
{
	float a, b, r;
   	 char op;

	printf("number  op  number?  ");
    	scanf(" %f %c %f", &a, &op, &b);

	switch(op)
	{
		case '+' : r = a + b;
		break;
		case '-' : r = a - b;
    		break;
		case '/' : r = a / b;
    		break;
		case '*' : r = a * b;
    		break;
	}
	printf("result is:");
	printf("%f", r);
	printf("This is the testing branch");
	return 0;
}
