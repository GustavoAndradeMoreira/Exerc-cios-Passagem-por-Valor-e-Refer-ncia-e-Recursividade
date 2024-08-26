#include <iostream>

using namespace std;

                                       //Versão Iterativa:

int fibonacciIterativo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, fib;
    for (int i = 2; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

int main() {
    int n;
    cout << "Digite a posicao da sequencia de Fibonacci: ";
    cin >> n;

    if (n < 0) {
        cout << "Erro: Posicao invalida." << endl;
    } else {
        cout << "O valor de Fibonacci na posicao " << n << " e: " << fibonacciIterativo(n) << endl;
    }

    return 0;
}
