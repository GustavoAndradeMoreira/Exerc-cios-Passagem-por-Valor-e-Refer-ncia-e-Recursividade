#include <iostream>

using namespace std;

                                               //Versão Iterativa:

int somatorioIterativo(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int n;
    cout << "Digite um valor para N: ";
    cin >> n;

    if (n <= 0) {
        cout << "Erro: N deve ser maior que zero." << endl;
    } else {
        cout << "Somatorio iterativo de 1 ate " << n << " e: " << somatorioIterativo(n) << endl;
    }

    return 0;
}
