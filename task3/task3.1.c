#include <stdio.h>
#include <math.h>

void print(int n, int k)
{
    double result= 0;
    int c = 0;
    for (int i = 0; i < (n - 1); ++i)
    {
        result = pow(-1,i) * 1/(2*(i+1));
        if (i == c * k)
        {
            c++;
        continue;
        }
        else
        {
            printf(" Result: %f\n", result);
        }
    }
}
