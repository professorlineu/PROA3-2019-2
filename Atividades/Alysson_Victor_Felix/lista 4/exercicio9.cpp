/**********************************************************
- Autor:     Alysson Victor felix
- Descrição: exercicio proposto 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int idade = 0;
    float fpeso = 0;
    float faltura = 0;
    int idadetotal = 0;
    int imediaidade = 0;
    int iquantpessoas =0;
    float faltura2 = 0;
    int idade2 = 0;
    float fporcent = 0;




    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    while (i < 2)
    {



   cout << endl;


       cout << "Mostre a idade da pessoa: ";
       cin >> idade;

       cout << "Mostre o peso da pessoa: ";
       cin >> fpeso;

       cout << "mostre a altura da pessoa: ";
       cin >> faltura;

       i++;

       idadetotal += idade;

       if (fpeso > 90 && faltura < 1.50)
       {
           iquantpessoas++;
       }

    if (faltura >= 1.90)
    {
        faltura2++;

        if (idade >= 10 && idade <= 30 )
        {
            idade2++;
        }



    }
}

    // fim do while / laço

    imediaidade += idadetotal / i;
     fporcent = (idade2 * 100) / faltura2;

    cout << "\n Media da idade da pessoa é: " << imediaidade << endl;

    cout << "\n Quantidade de pessoas com peso superior a 90 kg e altura inferior a 1.50: " << iquantpessoas << endl;

    cout << " a porcentagem de pessoas com idade  entre 10 e 30 anos entre as pessoas com altura superior a 1.90 é: " << fporcent << endl;

    return 0;
}
