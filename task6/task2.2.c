#include <math.h>

double summ2(double eps)
{
	double result = 0;
	{int i = 0;
	while (fabs(pow(-1,i) * 1/(2*(i+1)))>eps)
	{
		result += pow(-1,i) * 1/(2*(i+1));
		++i;
	}
	}
	return result;
}
