/**********************************************************
- Autor:  Paulo Ricardo
- Descrição: EX 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;


int main()
{
    //Declaração de variáveis
    float fnota1=0;
    float fnota2=0;
    float fnota3=0;
    float fnota4=0;
    float fmedia=0;

    cout << "\n digite a primeira nota:";
    cin >> fnota1;

    cout << "\n digite a segunda nota:";
    cin >> fnota2;

    cout << "\n digite a terceira nota:";
    cin >> fnota3;

    cout << "\n digite a quarta nota:";
    cin >> fnota4;

    fmedia=(fnota1+fnota2+fnota3+fnota4)/4;
    cout << "\n Sua Média é:" << fmedia;

    if (fmedia >7)
    {
        cout << "\n Aprovado";
    }
    else
    {
        cout << "\n Reprovado";
    }





    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



    return 0;
}
