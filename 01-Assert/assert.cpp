#include <iostream>
#define NDEBUG
#include <cassert>
using namespace std;

int main(){
    
    assert('c'!='b'); // Char-acter

    assert(string("hola")==string("hola")); // String

    assert(2==2); // Int-eger

    assert(-99!=99); // Unsigned

    assert(9.99==9.99); // Double 

    assert(true || true == true); // Bool

}
