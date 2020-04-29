template<unsigned n>
constexpr unsigned factorial = factorial<n - 1> * n;

template<>
constexpr unsigned factorial<0U> = 1U;
