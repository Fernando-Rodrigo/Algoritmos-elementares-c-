#include <iostream>

/**
 * Os funcion�rios contratados pela prefeitura de uma cidade s�o classificados em 3 n�veis A, B, C, conforme a pontua��o obtida
 * em 3 provas aplicadas, de acordo com o seguinde crit�rio:
 *       N�vel      Pontua��o
 *         A        superior a 7 em pelo menos duas das tr�s provas
 *         B        superior a 7 em exatamente uma das tr�s provas
 *         C        nenhum dos casos acima
 * Conhecendo-se as pontua��es obtidas por um funcion�rio nas 3 provas aplicadas, como determinar o seu n�vel de classifica��o?
 *
 * A pontua��o em cada prova � um vlor real entre 0 e 10.
 */


using namespace std;

int main()
{
    int n1, n2, n3;
    cout << "Entre com o valor da nota 1: ";
    cin >> n1;
    cout << "Entre com o valor da nota 2: ";
    cin >> n2;
    cout << "Entre com o valor da nota 3: ";
    cin >> n3;

    if ((n1 >= 7 && n2 >= 7) || (n1 >= 7 && n3 >= 7) || (n2 >= 7 && n3 >=7)) cout << "O funcionario pertence ao nivel A." << endl;
    else if ((n1 >= 7) || (n2 >= 7) || (n3 >= 7)) cout << "O funcionario pertence ao nivel B." << endl;
    else cout << "O funcionario pertence ao nivel C." << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
