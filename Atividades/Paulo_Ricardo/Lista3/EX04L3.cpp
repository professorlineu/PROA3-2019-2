/**********************************************************
- Autor:     Paulo Ricardo
- Descri��o: EX 4
**********************************************************/
# include  <iostream>
# include  <conio.h>
# include  <locale.h>
# include  <cstdlib>
# include  <cmath>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fnum1=0;
    float fnum2=0;

    cout << "Digite o primeiro numero:";
    cin >> fnum1;

    cout << "Digite o segundo numero:";
    cin >> fnum2;

    if (fnum1<fnum2)
    {
        cout << "O primeiro valor � menor:";
    }
    else
    {
        cout << "O segundo valor � menor:";
    }




    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa



    return 0;
}
