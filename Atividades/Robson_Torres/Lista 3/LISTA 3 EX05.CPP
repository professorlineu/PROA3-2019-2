/**********************************************************
- Autor:     Robson Gomes Torres
- Descri��o: lista 3 exrcicio 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int iescolha = 0;

    float fnum001 = 0;

    float fnum002 = 0;

    int  ioperacao;

    float fmedia = 0, fdiferenca = 0,  fmaior = 0, fproduto = 0, fdiv = 0;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout <<"digite o primeiro numero:"; //reccebe ovalor do primeiro n�mero

    cin >> fnum001;

    cout <<"digite o segundo numero:"; //recebe ovlordo segundo n�mero

    cin  >> fnum002;

    cout << "\nnum:\tlista de operacoes matematica:";

    cout << "\n1\tmedia entre os n�meros digitados:";

    cout << "\n2\tdiferen�a do maior pelo menor:";

    cout << " \n3\tprodutos entre os n�meors digitados:";

    cout << "\n4\tdivisao do primeiro pelo segundo:";

    cout << "\ndigite onumero da opera�ao que deseja realizar:"; //receba o valor da opera�ao

    cin  >> ioperacao;

    if (ioperacao == 1) //calcule as medias do s n�meros digitados


    {
        fmedia = (fnum001 + fnum002) /2;

        cout  << "\na media do numeros e "  << fmedia;

    }

    else if(ioperacao ==2)    //calcular a diferen�a do maior pelo menor
    {
        if(fnum001 > fnum002)
        {
            fdiferenca = fnum001 - fnum002;
        }
        else
        {
            fdiferenca = fnum002 - fnum001;
        }
        cout  << "\nadifrenca do resultado: "     << fdiferenca;
    }
    else  if(ioperacao =3)
    {
        fproduto = fnum001 * fnum002;

        cout  << "\naprodutos dos numeros e:";
    }
    else  if (ioperacao =4)
    {
        fdiv = fnum001 / fnum002;

        cout  << "\nadivisao do segundo pelo primeiro numero e:";

    }

} // fim do main
