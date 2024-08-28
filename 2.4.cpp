#include <iostream>

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    std::cout << "ingrese tres numeros enteros:" << std::endl;
    std::cin >>x >> y >> z;
    int resultado;
    resultado = x * y * z;
    std::cout <<"El producto es: " << resultado;

    return 0;
}


