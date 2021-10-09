#include <math.h>

double summ(int n)
{
	double result = 0;
	{int i = 0;
	while (i < n-1)
	{
		result += pow(-1,i) * 1/(2*(i+1));
		++i;
	}
	}
	return result;
}
