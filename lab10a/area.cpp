#include "area.h"

double area::square(const double a, const double b)
{
    double S;
        if (b == 1) {
            S = a * a;
        }
        else {
            S = a * b;
        }

        return S;
}
