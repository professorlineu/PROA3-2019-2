/**********************************************************
- Autor:    Allison Gon�alves de Almeida
- Descri��o: lista 2 -  exercicio 8
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    float  f_pesokg = 0 , f_pesog = 0 ;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite o peso em quilos: "; //recebeu o valor da massa em kilograma
    cin >> f_pesokg;

    f_pesog = f_pesokg * 1000 ; // c�lculo de valor da massa em gramas




    cout << " \ n 0 peso em gramas �: " << f_pesog;


    return 0;
}
