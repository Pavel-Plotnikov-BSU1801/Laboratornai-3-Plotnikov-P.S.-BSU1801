#include <stdio.h>
#include <math.h>

void print(int n, int k)
{
    double result= 0;
    int c = 0;
    {int i = 0;
    while (i < (n - 1))
    {
        result = pow(-1,i) * 1/(2*(i+1));
        if (i == c * k)
        {
            c++;
            ++i;
        continue;
        }
        else
        {
            printf(" Result: %f\n", result);
        }
        ++i;
        
    }
    }
}
