#include <iostream>

/**
 * Numa fazenda h� uma �rea dispon�vel que dever ser dividida entre os cultivos de feij�o e soja. A produ��o de feij�o �,
 * em media, de 32,8 sacas por hectare e a de soja de 43,6 sacas por hectare.
 * Conhecendo-se a �rea disponivel (em hectare)como determinar a �rea a ser ocupada pelo cultivo da soja e tamb�m a �rea
 * destinada ao cultivo de feij�o, sabendo-se que o produtor deseja ocupar toda a �rea dispon�vel e pretende obter volumes iguais
 * de produ�� de soja e feij�o?
 */


using namespace std;

int main()
{
    float A, F, S, M;
    cout << "Qual e a area disponivel para a plantcao: ";
    cin >> A;

    M = A / 2;
    S = M * (32.8 / 43.6);
    F = A - S;

    cout << "A area destinada a plantacao de feijao e " << F << endl;
    cout << "A area destinada a plantacao de soja e " << S << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
