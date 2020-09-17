#include <iostream>

/**
 * Um v�rus infectou o seu computador e estranhamente afetou o sistema eliminando da biblioteca math a fun��o sin. Por�m seu amigo
 * deu a seguinte f�rmula a voc�:
 * sen(x) = x-x^3/3!+x^5/5!-x^7/7!+x^9/9!...
 * Onde x � a medida de um �ngulo em radianos. Nessas condi��es dada a medida g de um �ngulo em graus, como obter um valor aproximado
 * do seno de g? Utilizar 10 parcelas da soma descrita.
 */


using namespace std;

int main()
{
	int i, j, n = 1, fatorial, sinal =- 1;
	float x, potencia, seno = 0, radiano;

	cout << "Entre o valor de x: ";
	cin >> x;

	radiano = x * (3.14159 / 180.0);

	for(i = 1; (n<=10); i += 2)
	{
		potencia = 1;
        fatorial = 1;
		for(j = 1;j <= i; j++)
		{
			potencia *= radiano;
			fatorial *= j;
		}
		sinal = -1 * sinal;
		seno += sinal * potencia / fatorial;
		n++;
	}
    cout << "O valor do seno e " << seno << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
