#include "bloatware2.h"

void bbbb()
    {
    Bloatware2<int> x;
    x.Foo (1, 1);

    Bloatware2<float> y;
    y.Foo (1, 1);
    y.Bar();

    // NOTE we can define a variable of Bloatware2<double> becouse the compiler has all the information about
    // the class it need from the header e.g. the members and methods of a class.
    // NOTE a call to z.Foo will result in a linker error (unresolved external symbol)
    // we need to explicitly instantiate Bloatware2<double> to generate Foo()
    // NOTE Foo's definition is in bloatware2.cpp so only there we can add "template Bloatware2<double>;"
    // to instantiate the template.
    Bloatware2<double> z;
    //z.Foo (1, 1);
    }
