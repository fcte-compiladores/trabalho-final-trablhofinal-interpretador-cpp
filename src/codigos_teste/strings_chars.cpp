#include <iostream>
using namespace std;

int main() {
    string s1 = "abc";
    string s2 = "def";
    char c1 = 'x';
    char c2 = 'y';
    s1 = s2;
    c1 = c2;
    s1 = c1; // inválido
    c2 = s1; // inválido
    return 0;
} 