#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int n, i, arrPrimos[200], np, arrNoPrimos[200], nnp;
    bool esPrimo;

    cout << "CLASIFIACION DE NUEMROS PRIMEOS " << endl
         << endl;

    np = nnp = 0;
    cout << " Digite numeros enteros. Propocione 0 para finalizar:" << endl;
    do
    {
        cin >> n;
        if (n != 0)
        {
            esPrimo = true;
            i = 2;
            while (i <= (int)sqrt(n) && esPrimo == true)
            {
                if (n % i == 0)
                    esPrimo = false;
                i++;
            }

            if (esPrimo == true)
                arrPrimos[np++] = n;

            else
                arrNoPrimos[nnp++] = n;

            nnp = nnp + 1;
        }
        while (n != 0)
        cout << " Los numeros primos capturados son:" << endl;
        for (i = 0; i < nnp; i++)
            cout << arrNoPrimos[i] << "";
        
        cout << endl;
        cout << "Los demas nueros capturados son:" << endl;
        for (i = 0; i < nnp; i++)

            cout << arrNoPrimos[i] << "";

        cout << endl
             << endl;

        return 0;
    
  }
}