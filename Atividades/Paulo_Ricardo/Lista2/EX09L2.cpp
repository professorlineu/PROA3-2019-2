/**********************************************************
- Autor:    Paulo Ricardo
- Descrição: Exercício 9 lista 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int baseM = 0 ;
    int basem = 0 ;
    int alt = 0 ;
    int resu = 0 ;

    cout << " \ n Área fazer Trapesio " ;

    cout << " \ n Digite uma base maior do trapézio: " ;
    cin >> baseM;

    cout << " \ n Digite uma base menor do trapézio: " ;
    cin >> basem;

    cout << " \ n Digite a altura: " ;
    cin >> alt;

    resu = ((baseM + basem) * alt) / 2 ;

    cout << " \ n Uma área do trapézio e: " << resu;




    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



    return 0;
}
