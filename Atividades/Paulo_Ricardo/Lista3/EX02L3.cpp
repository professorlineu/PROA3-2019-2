/**********************************************************
- Autor:     Paulo Ricardo
- Descrição: Ex 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fnota1 = 0;
    float fnota2 = 0;
    float fmed = 0;

    cout << "Primeira nota:";
    cin >> fnota1;

    cout << "Segunda nota:";
    cin >> fnota2;

    fmed= (fnota1 + fnota2)/2;
    cout << "Sua nota:" << fmed;

    if (fmed<=3)
    {
        cout << "\n Reprovado";
    }
    if (fmed>=7)
    {
        cout << "\n Aprovado";
    }
    else
    {
        cout << "\n Exame";
    }








    //Configuração da tela de saída

    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



    return 0;
}
