#include  <iostream>
using namespace std;

int main(void)
{
    int n, k,i, factn,factk,factnmk, comb;

    cout << "CALCULO DEL NEMERO COMBINATORIO" << endl << endl;

    cout << "Dame n y k:" << endl;
    cin >> n >> k; 
    
    
    factn = 1;
    for(i = 1; i <= n; i++)
    factn = factn * i;

    factk = 1;
    for(i = 1; i <= k; i++)
    factk = factk * i;

    factnmk = 1;
    for(i = 1; i <= n - k; i++)
    factnmk = factnmk * i;

comb = factn/(factk * factnmk);
cout << "el conbinatorio es:" << endl;
cout << endl << endl;

    return 0;
}