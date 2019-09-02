/**********************************************************
- Autor:     Robson torres
- Descri��o: LISTA 4 - EX.3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int i = 0;
    int iIdade = 0;
    float fFaixa1 = 0;
    float fFaixa5 = 0;
    float fPorcent1 = 0;
    float fPorcent2 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    while (i < 8)
    {
        cout << "\nIndique a Idade: ";
        cin >> iIdade;

        if (iIdade <= 15)
        {
            cout << "\n>>Essa pessoa est� na 1� faixa et�ria! " << fFaixa1++ << endl;
        }
        else if (iIdade <= 30)
        {
            cout << "\n>>Essa pessoa est� na 2� faixa et�ria! " << endl;
        }
        else if (iIdade <= 45)
        {
            cout << "\n>>Essa pessoa est� na 3� faixa et�ria! " << endl;
        }
        else if (iIdade <= 60)
        {
            cout << "\n>>Essa pessoa est� na 4� faixa et�ria! " << endl;
        }
        else
        {
            cout << "\n>>Essa pessoa est� na 5� faixa et�ria! " << fFaixa5++ << endl;
        }

        i++;
    } //fim do while

        fPorcent1 = (fFaixa1/i) *100;
        cout << "\nPorcentagem de pessoas na 1� faixa et�ria: " << fPorcent1 << "%" << endl;

        fPorcent2 = (fFaixa5/i) *100;
        cout << "\nPorcentagem de pessoas na �ltima faixa et�ria: " << fPorcent2 << "%" << endl;

    return 0;
}
