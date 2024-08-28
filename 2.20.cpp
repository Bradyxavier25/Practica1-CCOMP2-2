#include<iostream>

int main()
{
    int radio;

    std::cout << "El radio del circulo es: ";
    std::cin >> radio;
    std::cout << "El diámetro es " << 2 * radio << std::endl;
    std::cout << "La circunferencia es " << 2 * 3.14159 * radio << std::endl;
    std::cout << "El área es " << 3.14159 * radio * radio << std::endl;

    return 0;
}
