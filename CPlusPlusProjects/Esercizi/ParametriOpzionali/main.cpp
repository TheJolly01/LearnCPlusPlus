#include <iostream>

int divisione(int dividendo, int divisore, int* resto = nullptr)
{
    int risultato = dividendo / divisore;
    if (resto != nullptr)
    {
        *resto = dividendo % divisore;
    }
    return risultato;
}
int main()
{
    int a = 10;
    int b = 3;
    int c = 0;
    int d = divisione(a, b, &c);
    std::cout << a << " / " << b << " = " << d << " col resto di " << c << std::endl;
    std::cout << a << " / " << b << " = " << divisione(a, b) << std::endl;
    return 0;
}
