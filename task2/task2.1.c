#include <math.h>
double summ2(double eps)
{

    double result = 0;
    for (int i = 0; fabs(pow(-1,i) * 1/(2*(i+1)))>eps; ++i)
    {
        result += pow(-1,i) * 1/(2*(i+1));
    }
    return result;
}
