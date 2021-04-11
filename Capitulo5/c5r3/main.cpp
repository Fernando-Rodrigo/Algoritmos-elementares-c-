/*Dada uma sequ�ncia de valores reais que correspondam �s medidas dos di�metros de pe�as produzidass num torno, como obter a
quantidade de pe�as que possuem a medida do di�metro fora da faixa de valores definida por: valor m�dio mais ou menos o desvio
padr�o?

Obs: supor conhecida a quantidade total de pe�as observadas, que ser� no m�ximo iguala 50.*/

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int CDP(int qp, float v[], float &med, float &desv);

int ContP(int qp, float v[], float med, float desv);

int main()
{
    float vm, dp, vet[50];
    int quant, i, qpd;

    cout << "Entre quantidade de pecas: ";
    cin >> quant;
    cout << endl;

    for (i = 0; i < quant; i++)
    {
        cout << "Entre medida " << i + 1 << ": ";
        cin >> vet[i];
    }

    CDP(quant, vet, vm, dp);

    qpd = ContP(quant, vet, vm, dp);

    cout << "Quantidade de pecas fora do padrao: " << qpd << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}

int CDP(int qp, float v[], float &med, float &desv)
{
    int k;
    float soma = 0;

    for(k = 0; k < qp; k++) soma = soma + v[k];

    med = soma / qp;

    soma = 0;

    for (k = 0; k < qp; k++) soma = soma + pow(v[k] - med, 2);

    desv = sqrt(soma / qp);
}

int ContP(int qp, float v[], float med, float desv)
{
    int cont = 0, k;
    for(k = 0;k < qp; k++)
        if (fabs(v[k] - med) > desv) cont++;
    return (cont);
}
