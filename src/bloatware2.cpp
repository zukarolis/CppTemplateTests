#include "bloatware2.h"

// Explicitly instantiate these classes, note these statements can
// be placed anywhere in the translation unit
template Bloatware2<int>;
template Bloatware2<float>;

template<typename T>
T Bloatware2<T>::Foo (int _x, T _y)
    {
    // LOREM IPSUM CODE
    int x = _x * 2;
    int y = x + 2;
    y *= 2;
    for (int i = 0; i < 100; i++)
        {
        int a = x * x * y * x;
        a /= 2;
        a *= 3;
        while (--a > 0)
            {
            a -= 1;
            int asdf = x * 2;
            asdf += 1234;
            }
        }
    return _y + 1;
    }

template<typename T>
T Bloatware2<T>::Bar()
    {
    return 0;
    }
