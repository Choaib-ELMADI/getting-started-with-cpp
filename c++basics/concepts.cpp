#include <iostream>
#include <concepts>
#include <cstring>

template <typename T>
T add(T, T);

template <>
const char *add<const char *> (const char *a, const char *b);

int main() {
    std::cout << "int    ==> " << add(5, 10) << std::endl;
    std::cout << "float  ==> " << add(5.25, 10.25) << std::endl;
    //std::cout << "string ==> " << add("Hello ", "World!") << std::endl;//! const char * ==> error
    std::cout << "string ==> " << add("Hello ", "World!") << std::endl;  //! work with template specialization

    return 0;
}

template <typename T>
requires std::integral<T>//! enforce the type parameter to be an integer
T add(T a, T b) {
    return a+b;
};

template <>
const char *add<const char *> (const char *a, const char *b) {
    char res[20];
    std::strcpy(res, a);
    return std::strcat(res, b);
};