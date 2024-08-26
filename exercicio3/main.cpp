#include <iostream>

using namespace std;

void converterTempo(int segundosTotais, int &horas, int &minutos, int &segundos) {
    horas = segundosTotais / 3600;
    segundosTotais %= 3600;
    minutos = segundosTotais / 60;
    segundos = segundosTotais % 60;
}

int main() {
    int segundosTotais;
    int horas, minutos, segundos;

    cout << "Digite o tempo de duracao em segundos: ";
    cin >> segundosTotais;

    converterTempo(segundosTotais, horas, minutos, segundos);

    cout << "Tempo: " << horas << " horas, " << minutos << " minutos e " << segundos << " segundos." << endl;

    return 0;
}
