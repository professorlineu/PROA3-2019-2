/**********************************************************
- Autor:     Lineu Lima
- Descrição: Jogo Digital - v 4.0
**********************************************************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <time.h> // necessário para gerar número aleatório
#include <windows.h>
using namespace std;

void SetColor(int ForgC);

int main()
{
    int iAleatorio = 0; // número gerado pelo computador
    int iNumero = 0; // valor do usuário
    int iNivel = 0; // valor do usuário
    int i= 0;
    int icont = 0;
    int vet[6] ;
    int vet2[6] ;


    setlocale(LC_ALL,"");
    system("color F1");


    // evita que o número sorteado seja sempre o mesmo a cada execução
    srand(time(NULL));

    cout << " \n Jogo da mega aleatorio " << endl ;


    while ( i<6 )

    {
        iAleatorio = rand() % 6+ 1;



        do

        {
            icont = 0;

            SetColor(4);
            cout << "\nDigite um número de 1 a 6: ";
            cin >> iNumero;

            if (iAleatorio > iNumero)
            {
                SetColor(6);
                cout << "Pensei em um número MAIOR!" << endl;
                SetColor(5);
            }
            else if (iAleatorio < iNumero)
            {
                SetColor(6);
                cout << "Pensei em um número MENOR!" << endl;
                SetColor(5);
            } // fim do else
            else
            {
                cout << "\nParabéns, você acertou!" ;

            }


             icont++ ;


        }


        while (iAleatorio != iNumero);

         SetColor(1);
        cout << "\nO número aleatório sorteado nessa rodada foi o " << iAleatorio <<endl << endl ;

        vet[i] = iAleatorio ;

        vet2[i] = icont ;



        i++;
    }

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
