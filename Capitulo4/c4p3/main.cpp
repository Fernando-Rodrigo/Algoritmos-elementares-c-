/**
 * Dados dois valores inteiros positivos A e B, menores que 10000, como verificar se s�o ou n�o 'espelhos'?
 * Os valores s�o 'espelhos' se ao inverter-se a disposi��o dos algarismos de A obt�m-se o valor B. Por exemplo: 5273 e 3725 s�o
 * espelhos.
 * Construir e utilizar a fun��o LerValidar para a leitura (teclado) de um valor inteiro e a verifica��o da validade do valor lido
 * ( menor que 10000), repetindo a leitura sempre que for digitado um valor maior do que 9999 ou menor do que zero. Essa fun��o
 * deve ter um par�metro de entrada/saida correspondente ao valor inteiro lido.
 * Construir e utilizar a fun��o Inverte que deve possuir como par�mentro de entrada um valor inteiro e como sa�da um valor inteiro
 * obtido pela inver�o da disposi��o dos algarismos desse valor.
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int Inverte(int &n1, int &n2);
void LerValidar();

int main()
{
    LerValidar();

    system("PAUSE");
    return EXIT_SUCCESS;
}

int Inverte(int &n1, int &n2){

    int num = 0;

    num = (n1 - n1 % 1000) / 1000;
    n1 = n1 - (n1 - n1 % 1000);
    num = num + ((n1 - n1 % 100) / 10);
    n1 = n1 - (n1 - n1 % 100);
    num = num + ((n1 - n1 % 10) * 10);
    n1 = n1 - (n1 - n1 % 10);
    num = num + (n1 *1000);

    if(num == n2){
        cout << "Os numeros digitados sao espelhos!!" << endl;
    }
    else{
        cout << "Os numeros digitados nao sao espelhos!!!" << endl;
    }

    return 0;
}

void LerValidar(){

    int n1, n2;

    cout << "Entre o primeiro valor entre 0 e 9999: ";
    cin >> n1;

    cout << "Entre o segundo valor entre o e 9999: ";
    cin >> n2;

    if((n1 > 9999 || n1 < 0) || (n2 > 9999 || n2 < 0) ){
        cout << "\nOs numeros digitados devem ser entre 0 e 9999!!!" << endl;
    }
    else{
        Inverte(n1, n2);
    }
}
