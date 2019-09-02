/**********************************************************
- Autor:     Robson torres
- Descrição: LISTA 4 - EX.3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int i = 0;
    int iIdade = 0;
    float fFaixa1 = 0;
    float fFaixa5 = 0;
    float fPorcent1 = 0;
    float fPorcent2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    while (i < 8)
    {
        cout << "\nIndique a Idade: ";
        cin >> iIdade;

        if (iIdade <= 15)
        {
            cout << "\n>>Essa pessoa está na 1° faixa etária! " << fFaixa1++ << endl;
        }
        else if (iIdade <= 30)
        {
            cout << "\n>>Essa pessoa está na 2° faixa etária! " << endl;
        }
        else if (iIdade <= 45)
        {
            cout << "\n>>Essa pessoa está na 3° faixa etária! " << endl;
        }
        else if (iIdade <= 60)
        {
            cout << "\n>>Essa pessoa está na 4° faixa etária! " << endl;
        }
        else
        {
            cout << "\n>>Essa pessoa está na 5° faixa etária! " << fFaixa5++ << endl;
        }

        i++;
    } //fim do while

        fPorcent1 = (fFaixa1/i) *100;
        cout << "\nPorcentagem de pessoas na 1° faixa etária: " << fPorcent1 << "%" << endl;

        fPorcent2 = (fFaixa5/i) *100;
        cout << "\nPorcentagem de pessoas na última faixa etária: " << fPorcent2 << "%" << endl;

    return 0;
}
