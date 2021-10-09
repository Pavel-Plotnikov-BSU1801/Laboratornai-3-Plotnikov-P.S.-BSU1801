#include <stdio.h>
#include <math.h>

void main(void)

{

	double x = 1;

	double f = pow(((1 + x + pow(x, 2)) / (2 * x + pow(x, 2)) + 2 - (1 - x - pow(x, 2)) / (2 * x - pow(x, 2))), -1) * (5 - 2 * pow(x, 2));

	printf("x = %.4lf\n", x);

	printf("f = %.4lf\n\n", f);

	printf("x = ");

	scanf("%lf", &x);

	f = pow(((1 + x + pow(x, 2)) / (2 * x + pow(x, 2)) + 2 - (1 - x - pow(x, 2)) / (2 * x - pow(x, 2))), -1) * (5 - 2 * pow(x, 2));

	printf("f = %.4lf", f);

}
