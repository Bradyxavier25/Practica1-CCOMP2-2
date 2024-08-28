#include <iostream>

int main() {
    char caracter;
    std::cout << "Introduzca un carácter: ";
    std::cin >> caracter;
    std::cout << "El equivalente entero de '" << caracter << "' es: " << static_cast<int>(caracter) << std::endl;

    return 0;
}

