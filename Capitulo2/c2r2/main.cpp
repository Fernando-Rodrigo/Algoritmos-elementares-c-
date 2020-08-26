#include <iostream>
#include <cstdlib>

/**
 * A montagem de uma determindada placa de circuito elet�nico exige a utiliza��o de tr�s tipos de componentes: dois componentes
 * do tipo A, tr�s componentes do tipo B e sete componentes do tipo C. Conhecendo-se as quantidades dispon�veis de cada tipo de
 * componente, como determinar a quantidade m�xima de placas que podem ser montadas?
 */


using namespace std;

int main()
{
    int QA, QB, QC, QM, LA, LB, LC;

    cout << "Entre a quantidade do tipo A: ";
    cin >> QA;
    cout << "Entre a quantidade do tipo B: ";
    cin >> QB;
    cout << "Entre a quantidade do tipo C: ";
    cin >> QC;

    LA = QA/2;
    LB = QB/3;
    LC = QC/7;
    QM = LA;

    if (LB<QM) QM = LB;
    if (LC<QM) QM = LC;

    cout << "Quantidade maxima = " << QM <<endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
