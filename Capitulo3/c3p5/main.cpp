#include <iostream>

/**
 * Um policial rodovi�rio anota em sua ficha, a cada multa por excesso de velocidade, a velocidade autuada. Conhecendo-se a s�rie de
 * valores anotados num dia, como obter a maior das velocidades anotadas e tamb� a quantidade de vezes em que essa maior velocidade
 * foi registrada?
 * N�o � conhecida previamente a quantidade  de multas aplicadas. Supor que ap�s o �ltimo valor anotado ser� digitado o valor zero (o
 * zero indica fim da entrada de dados).
 */


using namespace std;

int main()
{
    int velocidade, nvezes, velocidademaior;
    nvezes = 0;
    velocidademaior = 0;

    while (velocidade != 0){
        cout << "Entre o valor da velocidade ";
        cin >> velocidade;
        if (velocidade > 120){
            nvezes++;
            if (velocidade > velocidademaior){
                velocidademaior = velocidade;
            }
        }
    }

    cout << "O numero de vezes que a velocidade foi excedida foi de " << nvezes << " vezes." << endl;
    cout << "A maior velocidade registrada por excesso de velocidade foi " << velocidademaior << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
