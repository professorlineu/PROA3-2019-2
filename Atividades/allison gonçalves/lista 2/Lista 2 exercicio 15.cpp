/**********************************************************
- Autor: allison gonçalves de alçmeida
- Descrição: lista 2 exercicio 15
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    float f_tempcel = 0 , f_tempfar = 0 ;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite o valor da temperatura em celsius: " ; // recebeu o valor da temperatura em celsius
    cin  >> f_tempcel;

    f_tempfar = 1,8 * f_tempcel + 32 ; // calculo da temperatura em fahrenheit.



   cout  << " \ n a temperatura em fahrenheit é: "<< f_tempfar;

   return 0 ;
}

