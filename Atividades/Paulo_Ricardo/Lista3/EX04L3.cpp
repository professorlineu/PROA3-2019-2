/**********************************************************
- Autor:     Paulo Ricardo
- Descrição: EX 4
**********************************************************/
# include  <iostream>
# include  <conio.h>
# include  <locale.h>
# include  <cstdlib>
# include  <cmath>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fnum1=0;
    float fnum2=0;

    cout << "Digite o primeiro numero:";
    cin >> fnum1;

    cout << "Digite o segundo numero:";
    cin >> fnum2;

    if (fnum1<fnum2)
    {
        cout << "O primeiro valor é menor:";
    }
    else
    {
        cout << "O segundo valor é menor:";
    }




    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



    return 0;
}
