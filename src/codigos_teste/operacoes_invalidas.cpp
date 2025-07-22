#include <iostream>
using namespace std;

int main() {
    int a = 5;
    bool b = true;
    int c = a && b; // erro: operação lógica com int
    float d = a % 2.5; // erro: módulo com float
    return 0;
} 