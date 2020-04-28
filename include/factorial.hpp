template<int n>
constexpr int factorial = factorial<n - 1> * n;

template<>
constexpr int factorial<0> = 1;