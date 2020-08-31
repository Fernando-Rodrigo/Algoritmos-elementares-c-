#include <iostream>
#include <cstdlib>

/**
 * Em 1920, Jan Lukasiewicz desenvolveu um sistema de l�gica formal o qual permite que express�es matem�ticas sejam especificadas
 * sem par�ntesis, colocando o operador antes (nota��o pr�-fixada) dos operandos. Por exemplo, a express�o (em nota��o infixa)
 * "(4 + 5) *6" pode ser expressa em nota��o pr�-fixa como "x 6 +4 5" ou "x + 4 5 6" e pode ser expressa em nota��o p�s-fixa como
 * "4 5 + 6 x" ou "6 4 5 + x".
 * A nota��o pr�-fixa tamb�m  � conhecida como Polish Notation (Nota��o Polonesa) em homenagem a Lukasiewicz. A HP (Hewlett-Packard)
 * adotou a nota��o p�s-fixa ou Reverse Polish Notation (RPN) para suas calculadoras tamb�m em homenagem a Lukasiewicz.
 * Como elaborar uma calculadora de tipo RPN simples com quatro opera��es (adi��o, subtra��o, multiplica��o e divis�o) utilizando
 * dois operandos e um operador?
 */


using namespace std;

int main()
{
    float x, y;
    char m;

    cout << "Entre x: ";
    cin >> x;
    cout << "Entre y: ";
    cin >> y;
    cout << "Entre um dos operadores (+, -, * ou /): ";
    cin >> m;

    switch(m){
    case '+': cout << x << m << y << "=" << x + y << endl;
    break;
    case '-': cout << x << m << y << "=" << x - y << endl;
    break;
    case '*': cout << x << m << y << "=" << x * y << endl;
    break;
    case '/': cout << x << m << y << "=" << x / y << endl;
    break;
    default: cout << "OPERADOR INDEFINIDO" << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
