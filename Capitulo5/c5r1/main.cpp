// Dado um n�mero inteiro positivo em nota��o decimal(usual), como obter o valor equivalente em nota��o hexadecimal?

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char H[9] = "        "; // 8 espa�os
    int D, K, R;

    cout << "Entre o numero na base 10: "; cin >> D;

    K = 7;

    while (D > 0)
    {
        R = D % 16;
        if (R < 10) H[K] = R + 48;
        else H[K] = R + 55;
        D = D / 16;
        K--;
    }

    cout << "Numero na base 16: " << H << "\n";

    system("PAUSE");
    return EXIT_SUCCESS;
}
