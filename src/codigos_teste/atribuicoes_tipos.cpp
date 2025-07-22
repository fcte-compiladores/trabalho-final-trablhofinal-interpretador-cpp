#include <iostream>
using namespace std;

int main() {
    int i = 1;
    float f = 2.5;
    double d = 3.14;
    char c = 'z';
    bool b = false;
    string s = "xyz";
    
    i = f; // válido (float para int)
    f = i; // válido (int para float)
    d = f; // válido (float para double)
    c = i; // válido (int para char)
    b = i; // válido (int para bool)
    s = "nova"; // válido
    i = s; // inválido
    f = s; // inválido
    c = s; // inválido
    b = s; // inválido
    return 0;
} 