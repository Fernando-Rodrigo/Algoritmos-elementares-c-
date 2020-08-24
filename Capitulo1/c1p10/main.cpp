#include <iostream>

/**
 * Os recursos financeiros de uma prefeitura s�o provenientes de 3 fontes: impostos municipais - recolhidos pela pr�pria
 * prefeitura, impostos estaduais - repassados� prefeitura pelo governo do estado e imposros federais - repassados � prefeitura
 * pelo governo federal. Conhecendo-se os valores relativos a essas tr�s fontes, como obter as porcentagens correspondentes a
 * esses volumes de recursos?
 */


using namespace std;

int main()
{
    float V, C, M, F, Pc, Pm, Pf;

    cout << "Qual e o valor de impostos municipais? ";
    cin >> C;
    cout << "Qual e o valor repassado a cidade pelo estado? ";
    cin >> M;
    cout << "Qual e o valor repassado a cidade pelo governo federal? ";
    cin >> F;

    V = C + M + F;
    Pc = (C/V)*100;
    Pm = (M/V)*100;
    Pf = (F/V)*100;

    cout << "O valor arrecadado pela cidade corresponde a " << Pc << "% do total." << endl;
    cout << "O valor repassado pelo estado corresponde a " << Pm << "% do total." << endl;
    cout << "O valor repassado pelo governo federal corresponde a " << Pf << "% do total." << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
