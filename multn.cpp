#include <iostream>
using namespace std;

int duplicar(int);
int triplicar(int);
int cuadruplicar(int);
int quintuplicar(int);

int main(void)
{
    int n, opcion, resp;
    cout << "MULTIPLICAR UN NUMERO" << endl
         << endl;

    cout << " digite un numero: ";

    cin >> n;

    cout << "Opciones de multiplicaciones" << endl
         << endl;
    cout << "1) duplicar." << endl;
    cout << "2) triplicar." << endl;
    cout << "3) cuadruplicar." << endl;
    cout << "4) quintuplicar." << endl;
    cout << endl
         << "digite su opcion: ";
    cin >> opcion;
    switch (opcion)
    {
    case 1:
        resp = duplicar(n);
        cout << " el doble de " << n << " es: " << resp;
        break;
    case 2:
        resp = triplicar(n);
        cout << " el triple de " << n << " es: " << resp;
        break;
    case 3:
        resp = cuadruplicar(n);
        cout << " el cuatruple de " << n << " es: " << resp;
        break;
    case 4:
        resp = quintuplicar(n);
        cout << " el quintuple de " << n << " es: " << resp;
        break;
    }
    cout << endl
         << endl;
    return 0;
}

int duplicar(int n)
{
    int dup;

    dup = 2 * n;
    return dup;
}
int triplicar(int n)
{
    return 3 * n;
}
int cuadruplicar(int n)
{
    return 4 * n;
}
int quintuplicar(int n)
{
    return 5 * n;
}
