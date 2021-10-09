#include <math.h>

int findFirstElement(double eps)
{
    int result_i = 0;
    for (int i = 0; fabs(pow(-1,i) * 1/(2*(i+1))) > eps; i++)
    {
        if (fabs(pow(-1,i) * 1/(2*(i+1))) > eps)
        {
            result_i = i;
        }
        else
        {
            break;
        }
    }
    return ++result_i;
}
