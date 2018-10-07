#pragma once

// This is the default way of using templates (stl uses this approach), where header contains all the definitions.
// Code for Foo will be generated in each translation unit (unless extern template is used)

template<typename T>
struct Bloatware1
    {
    T Foo (int _x, T _y)
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

    T a, b, c, d, e, f, g;
    };
