#include <iostream>

int main()
{
    int a, b;
    std::cout << "Introduzca un numero: ";
    std::cin >> a;
    std::cout << "Introduzca otro numero: ";
    std::cin >> b;

    if (a % b == 0)
    {
        std::cout << a << " es multiplo de " << b << std::endl;
    }
    else
    {
        std::cout << a << " no es multiplo de " << b << std::endl;
    }
    return 0;
}

