#include <math.h>

double summ(int n)
{
	double result = 0;
	{int i = 0;
	if (i < n-1 )
	{
		do
		{
			result += pow(-1,i) * 1/(2*(i+1));
			++i;
		} while (i < n-1 );
	}
	}
	return result;
}
