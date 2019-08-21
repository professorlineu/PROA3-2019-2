/**********************************************************
- Autor:     Adalberto Jose
- Descrição: Lista3 um programa que recebe 4 notas de um aluno ,mostre a media aritmetica das notas e a mensagem de aprovado ou reprovado considerando media 7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
    //Declaração de variáveis
    float fn1 = 0;
    float fn2 = 0;
    float fn3 = 0;
    float fn4  = 0;
    float fresultado  = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "\nInsira o valor da primeira nota:";
    cin>> fn1;

    cout<<" \nInsira o valor da segunda nota:";
    cin>>fn2;

    cout<<"\nInsira o valor da terceira nota:";
    cin>>fn3;

    cout<<"\Insira o valor da quarta nota:";
    cin>>fn4;

    fresultado = (fn1+fn2+fn3+fn4)/4;

    cout<<"\nA media da sua nota e "<<fresultado;


    if (fresultado>=7)
    {
      cout<<"\nParabens ,aprovado!Você passou de ano, Você e um sucesso!!!";

    }
    else
     cout<<"\nVocê esta reprovado! Nos vemos no proximo ano!!!";

    getch();


    return 0;
}
