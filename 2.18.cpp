#include <iostream>

int main()
{
    int a, b;
    std::cout << "Escriba dos enteros: "<<std::endl;
    std::cin >> a >> b;
    if (a > b) 
    {
        std::cout << a << " es mas grande" << std::endl;
    }
    if (a == b) 
    {
        std::cout << a << " es igual que " <<b<< std::endl;
    }
    if (a < b) 
    {
        std::cout << a << " es menor que " <<b<< std::endl;
    }
    return 0;

}


