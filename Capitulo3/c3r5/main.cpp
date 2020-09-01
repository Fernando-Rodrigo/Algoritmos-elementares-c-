#include <iostream>
#include <cstdlib>

/**
 * Durante os 30 dias de junho foram anotadas quantidades di�rias de ocorr�ncias registradas numa delegacia. Conhecendo-se a
 * s�rie de quantidades anotadas em ordem cronol�gica, como determinar o dia em que foi verificada a maior das quantidades
 * registradas? supor que n�o ocorra empates.
 */


using namespace std;

int main()
{
    int dia, dmax, qd, qmax;
    qmax = 0;
    for (dia = 1; dia <= 30; dia = dia + 1){
        cout << "Entre a quantidade do dia " << dia << ": ";
        cin >> qd;
        if (qd > qmax){
            qmax = qd;
            dmax = dia;
        }
    }

    cout << "Dia com maior numero de ocorrencias = " << dmax << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
