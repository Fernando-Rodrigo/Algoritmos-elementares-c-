#include <iostream>
#include <cstdlib>

/**
 * Durante os 30 dias de junho foram anotadas quantidades di�rias de ocorr�ncias registradas numa delegacia. Conhecendo-se a
 * s�rie de quantidades anotadas, como determinar a m�dia di�ria de ocorr�ncias registradas?
 */


using namespace std;

int main()
{
    int qd, dia;
    float media, soma;

    soma = 0;

    for (dia = 1; dia <= 30; dia = dia +1)
    {
        cout << "Entre a quantidade do dia " << dia << ": ";
        cin >> qd;
        soma = soma + qd;
    }

    media = soma / 30;

    cout << "Media = " << media << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
