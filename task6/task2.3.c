#include <math.h>
double summ2(double eps)
{
    double result = 0;
    {int i = 0;
    if (fabs(pow(-1,i) * 1/(2*(i+1))) > eps)
    {
        do
        {
            result += pow(-1,i) * 1/(2*(i+1));
            i++;
        } while (fabs(pow(-1,i) * 1/(2*(i+1))) > eps);
        i++;
    }
	}
    return result;
}
