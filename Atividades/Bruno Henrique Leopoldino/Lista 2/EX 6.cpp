/**********************************************************
- Autor:     BrUNO Henrique
- Descrição:
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float sala = 0 ;
    float salareceber = 0 ;
    float grati = 0 ;

    cout << " \ n Salário do funcionário: " ;

    cin >> sala;

    grati = sala * 4 / 100 ;

    salareceber = sala + grati;

    cout << " \ n Salário a receber : " << salareceber;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



    return 0;
}
