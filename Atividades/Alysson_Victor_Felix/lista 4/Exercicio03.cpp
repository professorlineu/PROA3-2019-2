/**********************************************************
- Autor:     Alysson Victor Felix
- Descri��o: Exercicio proposto 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int idade = 0;
    float fcont1 = 0;
    float fcont2 = 0;
    float ffaixa1 = 0;
    float ffaixa5 = 0;
    float fporcentagem1 = 0;
    float fporcentagem2 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    while ( i < 8)
    {



        cout << "Mostre a idade da pessoa: ";
        cin >> idade;

        if ( idade <= 15 )
        {
            cout << "Essa pessoa estara na 1� faixa et�ria! " << endl << endl;
            fcont1++;
        }

        else if (idade >= 16 and idade <= 30)
        {
            cout << "Essa pessoa estar� na 2� faixa et�ria! " << endl << endl;
        }

        if (idade >= 31 and idade <= 45)
        {
            cout << "Essa pessoa estar� na 3� faixa et�ria! " << endl << endl;
        }
        else if (idade >= 46 and idade <= 60)
        {
            cout << "Essa pessoa estar� na 4� faixa et�ria! " << endl << endl;
        }

        if (idade > 60)
        {
            cout << "Essa pessoa estar� na 5� faixa et�ria! " << endl << endl;
                fcont2++;
        }


        i++;
            } // fim do while


            fporcentagem1 = (fcont1 / i) * 100;


                cout << "A  porcentagem de pessoas na primeira faixa et�ria �: " << fporcentagem1 << "%" << endl;



            fporcentagem2 = (fcont2 / i ) * 100;



                cout << "A  porcentagem de pessoas na ultima faixa et�ria �: " << fporcentagem2 << "%" << endl;




    return 0;
}


