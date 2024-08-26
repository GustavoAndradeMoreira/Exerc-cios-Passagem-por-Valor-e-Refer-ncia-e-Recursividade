#include <iostream>

using namespace std;

                                      //Versão Recursiva:
int fibonacciRecursivo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
}

int main() {
    int n;
    cout << "Digite a posicao da sequencia de Fibonacci: ";
    cin >> n;

    if (n < 0) {
        cout << "Erro: Posicao invalida." << endl;
    } else {
        cout << "O valor de Fibonacci na posicao " << n << " e: " << fibonacciRecursivo(n) << endl;
    }

    return 0;
}
