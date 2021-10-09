#include <math.h>

double summ(int n)
{
	double result = 0;
    for (int i = 0; i < n-1; ++i)
    {
        result = result + pow(-1,i) * 1/(2*(i+1));
    }
    return result;
}
