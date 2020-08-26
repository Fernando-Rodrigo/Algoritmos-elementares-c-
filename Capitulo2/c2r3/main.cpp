#include <iostream>
#include <cstdlib>

/**
 * Conhecendo-se as medidas (vlore inteiros em graus) de dois dos tr�s �ngulos internos de um tri�ngulo, como determinar a medida
 * do terceiro �ngulo interno e classificar esse tri�ngulo como acut�ngulo, ret�ngulo, ou obtus�ngulo?
 */


using namespace std;

int main()
{
    float alfa, beta, gama;

    cout << "Entra com o angulo alfa: ";
    cin >> alfa;
    cout << "Entra com o angulo beta: ";
    cin >> beta;

    gama = 180 - alfa - beta;
    cout << "Gama = " << gama << endl;

    if((alfa>90)||(beta>90)||(gama>90))
        cout << "Triangulo OBTUSANGULO \n";
    else if ((alfa<90)&&(beta<90)&&(gama<90))
        cout << "Triangulo ACUTANGULO \n";
    else
        cout << "Triangulo RETANGULO \n";

    system("PAUSE");
    return EXIT_SUCCESS;
}
