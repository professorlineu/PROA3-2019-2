/**********************************************************
- Autor:     CAUE GABRIEL
- Descri��o: LISTA 4 - EX.9
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
    float fPeso = 0;
    float fAlt = 0;
    int iIdadeTotal = 0;
    int iMediaIdade = 0;
    int iQuantPessoas = 0;
    float fCont = 0;
    float fCont2 = 0;
    float fPorcent = 0;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    while (i < 10)
    {
        i++;

        cout << "\n\tMostre a Idade " << i << "� da pessoa >> ";
        cin >> iIdade;

        cout << "\nMostre o Peso " << i << "� da pessoa >> ";
        cin >> fPeso;

        cout << "\n\t\tMostre a Altura " << i << "� da pessoa >> ";
        cin >> fAlt;

        iIdadeTotal += iIdade;

        if (fPeso > 90 && fAlt < 1.50)
        {
            iQuantPessoas++;
        }

        if (fAlt >= 1.90)
        {
            fCont++;

            if (iIdade >= 10 && iIdade <= 30)
            {
                fCont2++;
            }
        }
    }

    iMediaIdade = iIdadeTotal / i;

    fPorcent = (fCont2 / fCont) * 100;

    cout << "\nA M�dia da Idade das Pessoas �: " << iMediaIdade << endl;

    cout << "\nA Quantidade de pessoas com peso superior a 90kg e a altura inferior � 1.50m: " << iQuantPessoas << endl;

    cout << "\nA Porcentagem de pessoas com Idade superior � 10 anos e inferior � 30 anos, com 1.90m de Altura: " << fPorcent << endl;



    return 0;
}
