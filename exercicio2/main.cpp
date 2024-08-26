#include <iostream>

using namespace std;

void converterTempo(int minutosTotais, int &horas, int &minutos) {
    horas = minutosTotais / 60;
    minutos = minutosTotais % 60;
}

int main() {
    int minutosTotais;
    int horas, minutos;

    cout << "Digite o total de minutos passados desde meia-noite: ";
    cin >> minutosTotais;

    converterTempo(minutosTotais, horas, minutos);

    cout << "Hora atual: " << horas << " horas e " << minutos << " minutos." << endl;

    return 0;
}
