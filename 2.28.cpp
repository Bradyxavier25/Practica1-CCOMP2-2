#include <iostream>

int main() {
    int numero;

    std::cout << "Introduzca un numero de cinco digitos: ";
    std::cin >> numero;
    if (numero >= 10000 && numero <= 99999) {
        int primerdigito = numero / 10000;
        int segundodigito = (numero / 1000) % 10;
        int tercerdigito = (numero / 100) % 10;
        int cuartodigito = (numero / 10) % 10;
        int quintodigito = numero % 10;
        std::cout << primerdigito << "   " << segundodigito << "   " << tercerdigito << "   " << cuartodigito << "   " << quintodigito << std::endl;
    }
    return 0;
}
