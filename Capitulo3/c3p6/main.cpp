#include <iostream>

/**
 * Um policial rodovi�rio anota em sua ficha, a cada multa aplicada, por excesso de velocidade, a velocidade autuada. Conhecendo-se
 * a s�rie de valores anotados num dia, como obter as tr�s maiores velocidades registradas?
 * N�o � conhecida previamente a quantidade de multas aplicadas. Supor que ap�s o �ltimo valor anotado ser� digitado o valor 0
 * (o zero indica fim da entrada de dados). Supor que n�o ocorra empates.
 *
 */


using namespace std;

int main()
{
    int velocidade, velocidademaior, velocidademaior1, velocidademaior2;
    cout << "Entre o valor da velocidade ";
    cin >> velocidade;
    velocidademaior = velocidade;
    velocidademaior1 = 0;
    velocidademaior2 = 0;

    while (velocidade != 0){
        cout << "Entre o valor da velocidade ";
        cin >> velocidade;
        if (velocidade > 120){
            if (velocidade > velocidademaior){
                velocidademaior2 = velocidademaior1;
                velocidademaior1 = velocidademaior;
                velocidademaior = velocidade;
            }
            if ((velocidade > velocidademaior1)&&(velocidade < velocidademaior)){
                velocidademaior2 = velocidademaior1;
                velocidademaior1 = velocidade;
            }
            if((velocidade > velocidademaior2)&&(velocidade < velocidademaior1)&&(velocidade < velocidademaior)){
                velocidademaior2 = velocidade;
            }
        }
    }

    cout << "A maior velocidade registrada por excesso de velocidade foi " << velocidademaior << endl;
    cout << "A segunda maior velocidade registrada foi " << velocidademaior1 << endl;
    cout << "A terceira maior velocidade registrada foi " << velocidademaior2 << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
