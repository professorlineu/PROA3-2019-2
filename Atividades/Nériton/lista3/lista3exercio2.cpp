/**********************************************************
- Autor:     N�riton
- Descri��o: lista 3 - exercicio 2\media com codi��o.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
float inota1=0;
float inota2=0;
float imedia=0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
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




