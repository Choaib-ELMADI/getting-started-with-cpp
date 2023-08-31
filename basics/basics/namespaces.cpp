/*
    ! Namespaces are used to resolve naming conflicts ==> Having different variables with the same name
*/

#include <iostream>
using namespace std; //! BAD PRACTICE

namespace first_namespace {
    int age = 21;
}

namespace second_namespace {
    int age = 22;
}

int main() {
    /*
    int age = 21;
    int age = 22;
    */ //!ERROR: redeclaration of 'int age'

    cout << first_namespace::age << endl;
    cout << second_namespace::age << endl;

    return 0;
}