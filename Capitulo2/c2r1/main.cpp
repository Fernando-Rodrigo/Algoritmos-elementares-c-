#include <iostream>
#include <cstdlib>

/**
 * Um ve�culo deve cumprir um trajeto de K quil�metros,partindo com o tanque cheio. Sabendo-se a capacidade de seu tanque de
 * combust�vel � de L litros e que o consumo m�dio � de C qil�metros por litro, como verificar se haver� ou n�o a necessidade de
 * rebastecer?
 */


using namespace std;

int main()
{
    float K, L, C, Autonomia;

    cout << "Entre a quilometragem: ";
    cin >> K;
    cout << "Entre a capacidade do tanque: ";
    cin >> L;
    cout << "Entre a consumo medio: ";
    cin >> C;

    Autonomia = L * C;

    if (Autonomia<K) cout << "Deve reabastecer \n";
    else cout << " Nao deve reabastecer \n";

    system("PAUSE");
    return EXIT_SUCCESS;
}
