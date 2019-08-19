/**********************************************************
- Autor:    Gerson flores de Souza
- Descrição: lista3 exer. 02
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int  inota01= 0;
    int  inota2= 0;
    int  iResultado= 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite a primeira nota: ";
    cin >> inota01;

    cout << "Digite a segunda nota: ";
    cin >> inota2;

    iResultado = (inota01+ inota2)/2;

    cout << "Sua situação é: " << iResultado << endl;

    if (iResultado >= 7)
    {
        cout << "Você foi aprovado" << endl;
    }
    else if (iResultado>=3 && iResultado<=7)
    {
        cout << "Você esté em exame !" << endl;
    }
    else
    {
        cout << "Você foi reprovado"<< endl;
    }

    return 0;
}
