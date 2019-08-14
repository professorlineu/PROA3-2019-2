/**********************************************************
- Autor:     Caue Gabriel
- Descrição: Lista 2 - Exercicio 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

   float fPesoKg = 0;
   float fPeso_em_gramas = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Indique o peso do cidadão:  ";
    cin >> fPesoKg;

    fPeso_em_gramas = fPesoKg * 1000;

    cout << "O peso do cidadão em gramas é:  " << fPeso_em_gramas << endl;



    return 0;
}
