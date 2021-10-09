#include <math.h>

int findFirstElement(double eps)
{
    int i = 0;
    while (fabs(pow(-1,i) * 1/(2*(i+1))) > eps)
    {
        if (fabs(pow(-1,i) * 1/(2*(i+1))) > eps)
        {
            i++;
        }
        else
        {
            break;
        }
    }
    return i;
    
}
