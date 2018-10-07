#pragma once

// This template doesn't have a definition in the header.
// To use such class methods an explicit instantiation of it is needed.
// Since the deffinition is in the bloatware2.cpp we place explicit instantiation
// statements there

template<typename T>
struct Bloatware2
    {
    T Foo (int _x, T _y);

    // Bar is defined in the cpp so all uses of Bar will be using the function generated
    // in bloatware2.obj. If we were to place the definition of Bar in this header - a copy
    // of the Bar would be generated in each translation unit (unless extern template is used)
    T Bar();

    T a, b, c, d, e, f, g;
    };
