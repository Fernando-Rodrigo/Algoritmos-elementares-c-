#include <iostream>

/**
 * Foram anotadas as medidas dos di�metros de v�rias pe�as produzidas em um torno. Como obter o valor m�dio dessas medidas? N�o �
 * conhecida previamente a quantidade de pe�as observdas. SUpor que ap�s a digita��o da medida da �ltima pe�a observada ser�
 * digitado o valor zero (o zero indica fim da entrada de dados).
 */


using namespace std;

int main()
{
    float diametro, media, cont, soma;

    cont = 0;
    soma = 0;

    while (diametro != 0){
        cout << "Entre o valor do diametro: ";
        cin >> diametro;
        soma = soma + diametro;
        cont = cont + 1;
    }

    media = soma / (cont - 1);

    cout << "A media das medidas e: " << media << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
