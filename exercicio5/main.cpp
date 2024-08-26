#include <iostream>

using namespace std;

int pesquisaBinaria(int arr[], int tamanho, int valor) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (arr[meio] == valor)
            return meio;
        if (arr[meio] < valor)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }

    return -1;
}

int main() {
    int vetor[] = {0, 18, 22, 25, 34, 40, 51, 66, 75, 87};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int valores[] = {75, 22, 90};
    for (int i = 0; i < 3; i++) {
        int resultado = pesquisaBinaria(vetor, tamanho, valores[i]);
        if (resultado != -1)
            cout << "Valor " << valores[i] << " encontrado na posicao " << resultado << endl;
        else
            cout << "Valor " << valores[i] << " nao encontrado" << endl;
    }

    return 0;
}
