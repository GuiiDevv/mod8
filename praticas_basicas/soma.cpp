#include <iostream>
using namespace std;


void somar (int a, int b){ // declarando
    cout << "resultado: " << a + b << endl;
}
void somar (double a, double b) {
    cout << "resultado: " << a + b << endl;
}

int main() {
    somar (5, 3);
    somar (4.4, 4.2);
    
    return 0;
}