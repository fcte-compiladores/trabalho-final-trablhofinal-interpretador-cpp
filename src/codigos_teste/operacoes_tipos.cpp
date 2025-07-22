#include <iostream>
using namespace std;

int main() {
    int i = 2, j = 3;
    float f = 1.5;
    double d = 2.0;
    bool b = true;
    string s = "a";
    
    int soma = i + j;
    float soma2 = i + f;
    double soma3 = d + f;
    int erro1 = i + s; // inválido
    int erro2 = i && f; // inválido
    bool ok = i > f;
    bool erro3 = s && b; // inválido
    return 0;
} 