/**********************************************************
- Autor:     José Augusto
- Descrição: bonificação 4% do salário
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    float sal=0;
    float salreceber=0;
    float grat=0;

    cout << "\nSalário do funcionário:";

    cin >> sal;

    grat = sal* 4/100;

    salreceber = sal + grat;

    cout << "\nSalário a receber=" << salreceber;

    //Declaração de variáveis


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



    return 0;
}
