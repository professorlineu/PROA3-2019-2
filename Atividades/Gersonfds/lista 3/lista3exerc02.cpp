/**********************************************************
- Autor:    Gerson flores de Souza
- Descri��o: lista3 exer. 02
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int  inota01= 0;
    int  inota2= 0;
    int  iResultado= 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite a primeira nota: ";
    cin >> inota01;

    cout << "Digite a segunda nota: ";
    cin >> inota2;

    iResultado = (inota01+ inota2)/2;

    cout << "Sua situa��o �: " << iResultado << endl;

    if (iResultado >= 7)
    {
        cout << "Voc� foi aprovado" << endl;
    }
    else if (iResultado>=3 && iResultado<=7)
    {
        cout << "Voc� est� em exame !" << endl;
    }
    else
    {
        cout << "Voc� foi reprovado"<< endl;
    }

    return 0;
}
