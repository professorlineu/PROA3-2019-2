/**********************************************************
- Autor:     Nériton
- Descrição: lista 3 - exercicio 2\media com codição.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float inota1=0;
float inota2=0;
float imedia=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout <<"\nDigite a primeira nota :";
cin >> inota1;

cout << "\nDigite a segunda nota: ";
cin >> inota2 ;
 imedia = (inota1 + inota2)/2;
 if (imedia >=7)

{
    cout <<"\nAprovado !!!!!:)";
}
else if ( imedia >=3)
{
    cout << "\nExame !!!";
}
    else if(imedia < 3)
    {
        cout <<"\nReprovado : (";

    }


  return 0;

}




