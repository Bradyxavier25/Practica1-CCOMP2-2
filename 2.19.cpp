#include <iostream>

int main()
{
    int a, b, c;
    int suma;
    int promedio;
    int producto;
    std::cout << "Ingrese tres numeros: ";
    std::cin >> a >> b >> c;
    suma = a + b + c;
    promedio = (a + b+c) / 3;
    producto = a * b * c;
    std::cout << "La suma es: " << suma << std::endl;
    std::cout << "El promedio es: " << promedio << std::endl;
    std::cout << "El producto es: " << producto << std::endl;
    int menor = a;
    if (b < menor) 
    {
        menor = b;
    }
    if (c < menor)
    {
        menor = c;
    }
    int mayor = a;
    if (b > mayor) 
    {
        mayor = b;
    }
    if (c > mayor) 
    { 
        mayor = c; 
    }
    std::cout << "El menor es " << menor << std::endl;
    std::cout << "El mayor es " << mayor << std::endl;
}

