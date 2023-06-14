#include <stdio.h>
/**
* main - Each new term in the Fibonacci sequence is generated by
* adding the previous two terms. By starting with 1 and 2
* Fibonacci sequence values not exceed 4,000,000
*
* Return:0
*/
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, fibsum;
	float tot_sum = 2;

	while (1)
	{
		fibsum = fib1 + fib2;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			tot_sum += fibsum;

		fib1 = fib2;
		fib2 = fibsum;
	}
	printf("%.0f\n", tot_sum);
}
