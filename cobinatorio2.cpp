#include  <iostream>
#include "cmath"
using namespace std;

int factorial(int n);

int main(void)
{
    int n, k,comb ;

    cout << "CALCULO DEL NEMERO COMBINATORIO" << endl << endl;

    cout << "Dame n y k:" << endl;
    cin >> n >> k; 

    comb = factorial(n) / (factorial(k) * factorial(n - k));
     cout << "el cobinatorio es: " << comb << endl;

    cout << endl << endl;

    return 0;
}
int factorial(int n)
    {
     int factn = 1, i;
    for(i = 1; i <= n; i++)
    factn = factn * i;

    return  factn;
    }
