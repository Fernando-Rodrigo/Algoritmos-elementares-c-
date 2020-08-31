#include <iostream>

/**
 * A avalia��o de mercado para um novo ve�culo� feita por uma revista, considerando-se tr�s quesitos: pre�o final,  custo de
 * manuten��o e aspectos de conforto. Para cada quesito � obtida uma pontua��o, defenida pelas respectivas equipes de avalia��o.
 * A avalia��o final � definida como m�dia ponderada dessas tr�s pontua��es, atribuindo-se peso 2 para a menos das pontua��es e
 * peso 5 para cada uma das outras duas. Conhesendo-se as pontua��es dos tr�s quesitos como obter o valor da avalia��o final?
 *
 */


using namespace std;

int main()
{
    float preco, manut, conforto, mediap, mediam, mediac, mediat;

    cout << "Entre o valor da nota do preco: ";
    cin >> preco;
    cout << "Entre o valor da nota da manutencao: ";
    cin >> manut;
    cout << "Entre o valor da nota do conforto: ";
    cin >> conforto;

    if ((preco < manut)&&(preco < conforto)){
        mediap = preco * 2;
        mediac = conforto * 5;
        mediam = manut * 5;

        mediat = (mediap + mediac + mediam) / 3;

        cout << "O valor da avliacao final e: " << mediat << endl;
    }
    else if((manut < preco)&& (manut < conforto)){
        mediap = preco * 5;
        mediac = conforto * 5;
        mediam = manut * 2;

        mediat = (mediap + mediac + mediam) / 3;

        cout << "O valor da avliacao final e: " << mediat << endl;
    }
    else{
        mediap = preco * 5;
        mediac = conforto * 2;
        mediam = manut * 5;

        mediat = (mediap + mediac + mediam) / 3;

        cout << "O valor da avliacao final e: " << mediat << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
