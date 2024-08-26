#include <iostream>

using namespace std;

void lerMatriz(int matriz[][25], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matriz[i][j];
        }
    }
}

void imprimirMatriz(int matriz[][25], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void transporMatriz(int matriz[][25], int transposta[][25], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

void multiplicarMatriz(int matriz[][25], int m, int n, int k) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            matriz[i][j] *= k;
        }
    }
}

void somarMatrizes(int matriz1[][25], int matriz2[][25], int m, int n, int soma[][25]) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main() {
    int M, N;
    int matriz[20][25], matriz2[20][25], transposta[25][25], soma[20][25];
    int K;

    cout << "Digite as dimensoes da matriz (M N): ";
    cin >> M >> N;

    cout << "Digite os elementos da matriz:" << endl;
    lerMatriz(matriz, M, N);

    transporMatriz(matriz, transposta, M, N);
    cout << "Matriz transposta:" << endl;
    imprimirMatriz(transposta, N, M);

    cout << "Digite o fator K para multiplicacao: ";
    cin >> K;
    multiplicarMatriz(matriz, M, N, K);
    cout << "Matriz multiplicada por " << K << ":" << endl;
    imprimirMatriz(matriz, M, N);

    cout << "Digite os elementos da segunda matriz:" << endl;
    lerMatriz(matriz2, M, N);
    somarMatrizes(matriz, matriz2, M, N, soma);
    cout << "Matriz soma:" << endl;
    imprimirMatriz(soma, M, N);

    return 0;
}
