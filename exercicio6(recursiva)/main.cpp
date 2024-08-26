#include <iostream>

using namespace std;

                                        //Versão Recursiva:
int somatorioRecursivo(int n) {
    if (n <= 0)
        return 0;
    return n + somatorioRecursivo(n - 1);
}

int main() {
    int n;
    cout << "Digite um valor para N: ";
    cin >> n;

    if (n <= 0) {
        cout << "Erro: N deve ser maior que zero." << endl;
    } else {
        cout << "Somatorio recursivo de 1 ate " << n << " e: " << somatorioRecursivo(n) << endl;
    }

    return 0;
}
