/**********************************************************
- Autor:    allison gonçalves de almeida
- Descrição: lista 2 exercicio 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    float f_lado = 0 , f_area = 0 ;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite o lado do quadrado " ; // recebe o valor do lado do quadrado
    cin >> f_lado;

    f_area = f_lado * f_lado ; //calculo ou valor da area do quadrado

    cout << " \ n  " " da area do quadadro é: " << f_area;


    return 0 ;
}
