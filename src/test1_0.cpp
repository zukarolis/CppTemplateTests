#include "bloatware1.h"

// Bloatware1<int>::Foo() and Bloatware1<float>::Foo() will be generated no matter what.

void aaaa()
    {
    Bloatware1<int> x;
    x.Foo (1, 1);

    Bloatware1<float> y;
    y.Foo (1, 1);

    Bloatware1<double> z;
    }
