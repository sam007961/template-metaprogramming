template<unsigned n>
struct Factorial {
    enum { value = n * Factorial<n - 1>::value };
};

template<>
struct Factorial<0U> {
    enum { value = 1 };
};
