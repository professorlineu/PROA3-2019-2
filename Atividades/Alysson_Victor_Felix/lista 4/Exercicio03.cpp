/**********************************************************
- Autor:     Alysson Victor Felix
- Descrição: Exercicio proposto 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int idade = 0;
    float fcont1 = 0;
    float fcont2 = 0;
    float ffaixa1 = 0;
    float ffaixa5 = 0;
    float fporcentagem1 = 0;
    float fporcentagem2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    while ( i < 8)
    {



        cout << "Mostre a idade da pessoa: ";
        cin >> idade;

        if ( idade <= 15 )
        {
            cout << "Essa pessoa estara na 1° faixa etária! " << endl << endl;
            fcont1++;
        }

        else if (idade >= 16 and idade <= 30)
        {
            cout << "Essa pessoa estará na 2° faixa etária! " << endl << endl;
        }

        if (idade >= 31 and idade <= 45)
        {
            cout << "Essa pessoa estará na 3° faixa etária! " << endl << endl;
        }
        else if (idade >= 46 and idade <= 60)
        {
            cout << "Essa pessoa estará na 4° faixa etária! " << endl << endl;
        }

        if (idade > 60)
        {
            cout << "Essa pessoa estará na 5° faixa etária! " << endl << endl;
                fcont2++;
        }


        i++;
            } // fim do while


            fporcentagem1 = (fcont1 / i) * 100;


                cout << "A  porcentagem de pessoas na primeira faixa etária é: " << fporcentagem1 << "%" << endl;



            fporcentagem2 = (fcont2 / i ) * 100;



                cout << "A  porcentagem de pessoas na ultima faixa etária é: " << fporcentagem2 << "%" << endl;




    return 0;
}


