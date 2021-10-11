#include <math.h>

int findFirstNegativeElement(double eps)
{
    int i = 0;
    if ((fabs(pow(-1,i) * 1/(2*(i+1))) > eps) && ((pow(-1,i) * 1/(2*(i+1)) < 0)) - 1)
    {
        do
        {
            i++;
        } while ((fabs(pow(-1,i) * 1/(2*(i+1))) > eps) && ((pow(-1,i) * 1/(2*(i+1)) < 0)) - 1);
    }

    return i;
}
