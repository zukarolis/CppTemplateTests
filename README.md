# CppTemplateTests
Test for c++ templates amd compilers work under the hood when compiling template code.

bloatware1.h        - common usage of templates where the definitions of methods are defined in the header itself.
bloatware1.h + .cpp - alternative approach where definitions are moved to a cpp file.

Sizes of compiled *.obj files were used to compare different approaches.
A more detailed comparison could be made using tools like NM (unix GNU) or DUMPBIN (visual studio) to examine symbols in obj files.

Refer to comments in h/cpp files for details.

Summary:
test1_0.obj     should have both definitions of Foo<br/>
test1_1.obj     should have external symbols for Foo (they will be linked to definitions in test1_0.obj)<br/>
test2.obj       should have external symbols for Foo (they will be linked to definitions in bloatware2.obj)<br/>
