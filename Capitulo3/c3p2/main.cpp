#include <iostream>

/**
 * Um produto � embalado colocando-se aproximadamente 60 unidades em cada caixa. Um �rg�o de defesa do consumidor analisa um lote
 * com v�rias caixas. Se pelo menos 98% das caixas inspecionadas apresentarem quantidade efetivva maior do que 58 unidades, o lote
 * � aprovado, caso contr�rio (porcentagem menor do que 98%) o lote � rejeitado. Conhecendo-se as quantidades efetivas das v�rias
 * caixas inspecionadas, como determinar se o lote deve ser aprovado ou rejeitado? A "sa�da" dever� ser uma das mensagens: lote
 * aprovado ou lote rejeitado
 *
 * N�o � conhecida previamente a quantidade de caixas inspecionadas. Supor que ap�s o �ltimo valor anotado ser� digitado o
 * valor zero (o zero indica fim da entrada de dados).
 */


using namespace std;

int main()
{
    int unidades, caixasmenos, caixasmais;
    float porcentagem;

    caixasmais = 0;
    caixasmenos = 0;

    while (unidades != 0){
        cout << "Entre o valor de unidades por caixa: ";
        cin >> unidades;
        if (unidades >= 58){
            caixasmais = caixasmais + 1;
        }
        if ((unidades < 58)){
            caixasmenos = caixasmenos + 1;
        }
    }

    porcentagem = caixasmais / caixasmenos;

    if (porcentagem >= 0.98) cout << "Lote aprovado" << endl;
    else cout << "Lote rejeitado" << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
