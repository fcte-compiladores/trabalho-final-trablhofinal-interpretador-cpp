#include <iostream>
using namespace std;

int main() {
    bool b1 = true;
    bool b2 = false;
    int i = 1;
    b1 = b2 && true;
    b2 = i && b1; // inválido
    i = b1 || b2; // válido (bool para int)
    return 0;
} 