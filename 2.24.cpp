#include <iostream>

int main()
{
    int a;
    int residuo;
    std::cout << "Introduzca un numero: "<<std::endl;
    std::cin >> a;
    residuo = a % 2;
    if (residuo ==0)
    {
        std::cout << "es par";
    }
    else 
    {
        std::cout << "es impar";
    }
    return 0;
}


