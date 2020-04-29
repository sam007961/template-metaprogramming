#include <type_traits>
#include <max.hpp>

static_assert(Max<1>::value == 1);
static_assert(Max<1, 2>::value == 2);
static_assert(Max<1, 2, 3>::value == 3);
static_assert(Max<3, 2, 1>::value == 3);