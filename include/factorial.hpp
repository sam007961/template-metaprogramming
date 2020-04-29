#include <type_traits>
using std::integral_constant;

template<long N> struct Factorial : 
    integral_constant<unsigned, N * Factorial<N - 1>::value> {};

template<> struct Factorial<0> :
    integral_constant<long, 1> {};
