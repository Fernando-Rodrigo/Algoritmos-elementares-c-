#include <iostream>

/**
 * O n�mero 3025 tem a seguinte caracter�stica: 30 + 25 = 55 e 55^2 = 3025. Como verificar se um n�mero qualquer de quatro
 * algarismos apresenta essa caracteristica?
 * Fazer uma verifica��o na entrada de dados para assegurar que o n�mero tem qutro algarismos e apresentar na sa�da o valor de
 * entrada, o quadrado da soma e uma das mensagens: caracter�stica OK ou caracter�stica NOK.
 * Construir e utilizar uma fun��o que tenha como par�metro de entrada um n�mero de quatro algarismos e como retorno a soma
 * descrita acima, ou seja, se a entrada for 3025 a sa�da ser� 55.
 */


using namespace std;

int verifica (int &num)
{
   int num1, num2, soma, quadrado;

   num1 = num / 100;
   num2 = num % 100;

   soma = num1 + num2;

   quadrado = soma * soma;

   cout << "A soma dos numeros separados e " << soma << " e o quadrado da soma e " << quadrado << endl;

   if (quadrado == num)
   {
       cout << "Caracteristica OK" << endl;
   }
   else
   {
       cout << "Caracteristica NOK" << endl;
   }

   return 0;
}

int main()
{
    int num;

    cout << "Entre um valor de 4 digitos: ";
    cin >> num;

    if (num < 1000 || num > 9999) cout << "Digite um numero de 4 digitos." << endl;
    else verifica(num);

    system("PAUSE");
    return EXIT_SUCCESS;
}
