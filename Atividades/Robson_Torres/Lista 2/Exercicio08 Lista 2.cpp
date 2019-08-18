/**********************************************************
- Autor:     Robson Torres
- Descrição: Exercicio 08 Lista 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

           float  f_PesoKg = 0, f_Pesog = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "digite o peso em quilos: ";    // Recebe o valor de massa em quilogramas
    cin >> f_PesoKg;

      f_Pesog = f_PesoKg * 1000; //Calcula o valor da massa em gramas


      cout << "\nO peso em gramas é: " << f_Pesog;



    return 0;
}

