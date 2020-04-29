#include <type_traits>
using std::conditional;
using std::integral_constant;

template<int... Ints>
struct Max;

template<int First, int... Rest>
struct Max<First, Rest...> : Max<First, Max<Rest...>::value> {};

template<int First, int Second>
struct Max<First, Second> :
    conditional<(First > Second),
        integral_constant<int, First>,
        integral_constant<int, Second>>::type {};
    
template<int Only>
struct Max<Only> : integral_constant<int, Only> {};
