#include <math.h>

int findFirstNegativeElement(double eps)
{
    int result_i = 0;
    for (int i = 0; (fabs(pow(-1,i) * 1/(2*(i+1))) > eps) && ((pow(-1,i) * 1/(2*(i+1)) < 0)); ++i)
    {
        result_i = i;
    }
    return ++result_i;
}
