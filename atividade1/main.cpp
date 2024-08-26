#include <iostream>

using namespace std;

void converterIdade(int idadeDias, int &anos, int &meses, int &dias) {
    anos = idadeDias / 365;
    idadeDias %= 365;
    meses = idadeDias / 30;
    dias = idadeDias % 30;
}

int main() {
    int idadeDias;
    int anos, meses, dias;

    cout << "Digite a idade em dias: ";
    cin >> idadeDias;

    converterIdade(idadeDias, anos, meses, dias);

    cout << "Idade: " << anos << " anos, " << meses << " meses, " << dias << " dias." << endl;

    return 0;
}
