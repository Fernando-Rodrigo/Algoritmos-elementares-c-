/*Um grupo de ecologistas mant�m em observa��o as reservas florestais do planeta. Devido a problemas diplom�ticos nem sempre �
poss�vel um contato direto, assim grande parte desta observa��o � feita por sat�lite. Como calcular a �rea aproximada de
desmatamanto a partir de uma foto via sat�lite?

Observa��es:

A regi�o deve ser "simplificada" considerando-a como um pol�gono, onde s�o conhecidas as coordenadas dos v�rtices desse pol�gono.
Os v�rtices devem ser enumerados no sentido hor�rio.

Utilizar a seguinte express�o para o c�lculo da �rea:
�rea = [(x1+x2)'(y1-y2)+(x2+x3)'(y2-y3)+...+(xn+x1)'(yn-y1)]/2
Essa express�o corresponde a uma composi��o (adi��es/subtra��es) de �reas de v�rios trap�zios.
�rea do trap�zio: A=(base maior+base menor)x altura/2*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    float x[5], y[50], soma;
    int qv, i;

    cout << "Entre a quantidade de vertices do poligono: ";
    cin >> qv;

    cout << "Entre as coordenadas x, y separados por espaco." << endl;

    for (i = 0; i < qv; i++)
    {
        cout << "Entre o vertice " << i + 1 << ": ";
        cin >> x[i] >> y[i];
    }

    soma = 0;

    for (i = 0; i < qv - 1; i++)
        soma = soma + (x[i] + x[i+1]) * (y[i] - y[i+1]);
    soma = soma + (x[qv - 1] + x[0]) * (y[qv - 1] - y[0]);
    soma = soma / 2;

    cout << "Area do poligono: " << soma << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
