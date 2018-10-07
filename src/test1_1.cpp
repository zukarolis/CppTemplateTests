#include "bloatware1.h"

// Another posible solution to bloatware code - extern template.

// We can define the template function as external symbol meaning
// that compiler will not generate Bloatware1<int>::Foo(), but will leave it as an external
// symbol. Since test1_0.cpp will generate the template, linker will use that here.

// NOTE a possible problem with this aproach - in a big project you might not know if a template
// is instantiated somehwere or not and might end up with linker errors if you assumed that it was.
extern template int Bloatware1<int>::Foo (int, int);
extern template float Bloatware1<float>::Foo (int, float);

void cccc()
    {
    Bloatware1<int> x;
    x.Foo (1, 1);

    Bloatware1<float> y;
    y.Foo (1, 1);

    Bloatware1<double> z;
    }
