#include <math.h>

int findFirstElement(double eps)
{
    int i = 0;
    if (fabs(pow(-1,i) * 1/(2*(i+1))) > eps)
    {
        do
        {
            if (fabs(pow(-1,i) * 1/(2*(i+1))) > eps)
            {
                ++i;
            }
            else
            {
                break;
            }
        } while (fabs(pow(-1,i) * 1/(2*(i+1))) > eps);
    }
    return i;
}
