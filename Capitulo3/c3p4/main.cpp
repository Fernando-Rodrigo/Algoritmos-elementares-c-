#include <iostream>

/**
 * Todos os dias um sistema de controle de polui��o de uma cidade coleta dados de dez esta��es de monitora��o atmosf�rica e anota
 * em um sistema informatizado. Escolhendo-se aleatoriamente um dia de um m�s qualquer, como determinar a esta��o que apresentou
 * o maior indice de polui��o e qual esse indice? Idem para o menor �ndice. Supor n�o haver empates de �ndices.
 *
 *
 */


using namespace std;

int main()
{
    float iparticulas,ipmaior, ipmenor, tempp, iozonio, iomaior, iomenor, tempoz;
    int k, kozmaior, kozmenor, kpmaior, kpmenor;

    ipmaior = 0;
    kpmaior = 0;
    iomaior = 0;
    kozmaior = 0;
    ipmenor = 0;
    kpmenor = 0;
    iomenor = 0;
    kozmenor = 0;
    tempp = 250;
    tempoz = 250;

    for (k = 1; k <= 10; k++){
        cout << "Entre o valor de particulas da estacao " << k << ": ";
        cin >> iparticulas;
        cout << "Entre o valor da quantidade de ozonio da estacao " << k << ": ";
        cin >> iozonio;

        if (iparticulas > ipmaior){
            ipmaior = iparticulas;
            kpmaior = k;
        }
        if (iparticulas < tempp){
            tempp = iparticulas;
            ipmenor = tempp;
            kpmenor = k;
        }
        if(iozonio > iomaior){
            iomaior = iozonio;
            kozmaior = k;
        }
        if (iozonio < tempoz){
            tempoz = iozonio;
            iomenor = tempoz;
            kozmenor = k;
        }
    }

    if(ipmaior > iomaior){
        cout << "O indice de particulas e o maior na estacao " << kpmaior << endl;
    }
    else{
        cout << "O indice de ozonio e o maior na estacao " << kozmaior << endl;
    }

    if(ipmenor < iomenor){
        cout << "O menor indice e o de particulas da estacao " << kpmenor << endl;
    }
    else{
        cout << "o menor indice e o do ozonio da estacao " << kozmenor << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
