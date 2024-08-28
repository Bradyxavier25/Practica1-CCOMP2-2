#include<iostream>

int main()
{
    int a, b, c, d, e;

    std::cout << "Introduzca cinco enteros: ";
    std::cin >> a >> b >> c >> d >> e;
    int mayor = a;
    int menor = a;

    if (b > mayor)
    {
        mayor  = b; 
    }
    if (c > mayor)
    {
        mayor  = c; 
    }
    if (d > mayor) 
    {
        mayor  = d;
    }
    if (e > mayor) 
    { 
        mayor  = e; 
    }

    // Comparar con los otros números para encontrar el menor
    if (b < menor) 
    {
        menor = b; 
    }
    if (c < menor) 
    {
        menor = c;
    }
    if (d < menor)
    { 
        menor = d; 
    }
    if (e < menor) 
    { 
        menor = e; 
    }

    std::cout << "El mayor es " << mayor << std::endl;
    std::cout << "El menor es " << menor << std::endl;

    return 0;
}


