/**********************************************************
- Autor:     SJos� Augusto
- Descri��o: notas
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    float nota1=0;
    float nota2=0;
    float peso1=0;
    float peso2=0;
    float soma1=0;
    float soma2=0;
    float total=0;
    float media=0;




    cout << "\nDigite as duas notas:";

    cin >> nota1 >> nota2;

    cout << "\nDigite os dois pesos:";

    cin >> peso1 >> peso2;

    soma1=nota1 * peso1;
    soma2=nota2 * peso2;

    total=peso1 + peso2;

    media = (soma1 + soma2)/total;

    cout << "\nmedia =" << media;
    //Declara��o de vari�veis


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa



    return 0;
}
