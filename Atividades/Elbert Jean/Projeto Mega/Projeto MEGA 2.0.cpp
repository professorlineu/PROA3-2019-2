/**********************************************************
- Autor:     Adriel Silveira / Elbert Jean
- Descri��o: Jogo da MEGA - v 1.0
**********************************************************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <time.h> // necess�rio para gerar n�mero aleat�rio
#include <windows.h>
using namespace std;

void SetColor(int ForgC);

int main()
{
    int iAleatorio = 0; // n�mero gerado pelo computador
    int iNumero = 0; // valor do usu�rio
    int iNivel = 0; // valor do usu�rio
    int i= 0;
    int icont = 0;
    int vet[6] ;
    int vet2[6] ;


    setlocale(LC_ALL,"");
    system("color F1");


    // evita que o n�mero sorteado seja sempre o mesmo a cada execu��o
    srand(time(NULL));

    cout << " \n     JOGO DA MEGA ALEAT�RIO " << "\n";
    cout <<"\n       TABELA DE PONTUA��O" << endl ;
    cout <<"\nTENTATIVAS \t\t PONTOS";
    cout <<"\n    1 \t\t\t   10";
    cout <<"\n  2 a 3 \t\t    7";
    cout <<"\n  4 a 5 \t\t    5";
    cout <<"\n  6 a 7 \t\t    3";
    cout <<"\n  8 a 9 \t\t    2";
    cout <<"\n   10\t\t\t    1";
    cout << endl ;




    while ( i<6 )

    {
        iAleatorio = rand() % 6+ 1;

         icont = 0;



        do

        {
            icont++ ;


            SetColor(4);
            cout << "\nDigite um n�mero de 1 a 6: ";
            cin >> iNumero;

            if (iAleatorio > iNumero)
            {
                SetColor(6);
                cout << "Pense em um n�mero MAIOR!" << endl;
                SetColor(5);
            }
            else if (iAleatorio < iNumero)
            {
                SetColor(6);
                cout << "Pense em um n�mero MENOR!" << endl;
                SetColor(5);
            }

             // fim do else
            else
            {
                cout << "\nParab�ns, voc� acertou na " ;

            }




             cout << "Tentativa N�mero " <<icont << endl ;




        }


        while (iAleatorio != iNumero);

         SetColor(1);
        cout << "\nO n�mero aleat�rio sorteado nessa rodada foi o " << iAleatorio <<endl << endl ;

        vet[i] = iAleatorio ;

        vet2[i] = icont ;



        i++;
    } // fim do while repetidor

    cout << "\nOs numeros sorteados nesse jogo foram :" <<endl;
    for(i=0;i<6;i++)
    {
        cout << vet[i] << "\t " ;
    }

    cout << "\n" ;

    cout << "\nQuantidade de tentaivas para cada acerto foram:" <<endl;
    for(i=0;i<6;i++)
    {
        cout << vet2[i] << "\t " ;


    if (vet2[i]  == 1)
    {
    cout <<"10 pontos";
    }





    else
    {
        cout <<"NENHUM PONTO";
    }

    }

} // fim do main






void SetColor(int ForgC)
{
    WORD wColor;
    //We will need this handle to get the current background attribute
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    //We use csbi for the wAttributes word.
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        //Mask out all but the background attribute, and add in the forgournd color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}
