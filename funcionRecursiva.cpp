#include <iostream>

using namespace std;
int factorial(int);

int main()
{
    int numFactorial;
    cout << "Ingrese numero para obtener factorial: \n";
    cin >> numFactorial;

    cout << "El factorial del numero " << numFactorial << " es: " << factorial(numFactorial);

    return 0;
}
int factorial(int n)
{
    // caso base
    if (n == 1)
    {
        return 1;
    }
    // llamada a la funcion
    return n * factorial(n - 1);
}