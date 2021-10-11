#include <math.h>


int findFirstNegativeElement(double eps)
{
    int i = 0;
    while ((fabs(pow(-1,i) * 1/(2*(i+1))) > eps) && ((pow(-1,i) * 1/(2*(i+1)) < 0)) - 1)
    {
        i++;
    }

    return ++i;
}

