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
	}
	printf("%f", r);
	return 0;
}
