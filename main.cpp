#include "func.h"

int main() {
    const double a = 4.8;
    const double b = -7.9;
    double n, m;
    n = count_n(a, b);
    m = count_m(a, b, n);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "Result n: " << n << endl;
    cout << "Result m: " << m;
    return 0;
}
