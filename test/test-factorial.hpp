#include <factorial.hpp>

static_assert(factorial<0> == 1);
static_assert(factorial<1> == 1);
static_assert(factorial<2> == 2);
static_assert(factorial<3> == 6);
static_assert(factorial<4> == 24);
static_assert(factorial<5> == 120);