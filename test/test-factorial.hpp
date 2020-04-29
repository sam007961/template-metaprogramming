#include <factorial.hpp>

static_assert(Factorial<0>::value == 1);
static_assert(Factorial<1>::value == 1);
static_assert(Factorial<2>::value == 2);
static_assert(Factorial<3>::value == 6);
static_assert(Factorial<4>::value == 24);
static_assert(Factorial<5>::value == 120);
