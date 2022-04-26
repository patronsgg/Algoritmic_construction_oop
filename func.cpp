#include "func.h"

double count_m(double a, double b, double n)
{
    double m = 0;
    if (n < b)
    {
        m = ((n + a) / -b) + sqrt(pow(sin(a), 2) - cos(n));
    }
    else if (n == b)
    {
        m = pow(b, 2) + tan(n * a);
    }
    else
    {
        m = pow(b, 3) + n * pow(a, 2);
    }
    return m;
}


double count_n(double a, double b)
{
    double n = 0;
    if (a >= b)
    {
        n = pow(a - b, (1/3));
    }
    else
    {
        n = pow(a, 2) + ((a - b) / (sin(a * b)));
    }
    return n;
}