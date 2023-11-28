#include <iostream>

namespace one {
    int x = 1;
}
namespace two {
    int x = 2;
}

int main(){
    // this is a comment
    /* multi-line comment */
    std::cout << "Hello World!" << '\n';

    // to define variables, state data type followed by name and value
    int age = 10;

    // datatypes include int, double (decimals), char (single character),
    // bool (boolean), std::string (string)
    std::string name = "Steve";
    std::cout << name << " is " << age << " years old." << '\n';

    // const define a variable as immutable (constant)
    const double g = 9.81;

    // Namespaces allow two entities to share a name (see top)
    std::cout << "x in namespace one: " << one::x << '\n';
    std::cout << "x in namespace two: " << two::x << '\n';

    // 'using namespace one' would mean all entities after that without a
    // prefix are assumed to belong to namespace one
    // 'using namespace std' mean you wouldn't have to add the std prefix (NOT RECCOMENTED)
    // --> use 'using std::cout' or 'using std::string'


    return 0;
}