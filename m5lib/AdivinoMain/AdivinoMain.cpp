#include <iostream>
#include "adi.h"

int main()
{
    std::string opcion;

    do
    {
        std::cout << BLUE << "BIENVENIDO QUIERES JUGAR AL ADIVINO?" << RESET << std::endl;
        std::cout << "1- JUGAR." << std::endl;
        std::cout << "2- Como se juega." << std::endl;
        std::cout << "3- SALIR." << std::endl;
        std::cin >> opcion;

        if (opcion == "1")
        {
            std::cout << "¡A JUGAR!" << std::endl;
            Adivino::adiv::adivino();
        }
        else if (opcion == "2")
        {
            std::cout << "Bueno el juego es simple, es un juego con + de 50 FINALES posibles." << std::endl;
            std::cout << "Se trata de un juego de HISTORIA, en el que tu eres el PROTAGONISTA." << std::endl;
            std::cout << "Tu OBJETIVO llegar al FINAL." << std::endl;

            // Preguntar si desea volver al menú principal
            std::string volver;
            std::cout << "Desea volver al menu principal? (S/N): ";
            std::cin >> volver;
            if (volver == "S" || volver == "s")
                continue;
        }
        else if (opcion == "3")
        {
            std::cout << "Saliendo del juego. Hasta luego!" << std::endl;
            break;
        }
        else
        {
            std::cout << "Respuesta Incorrecta." << std::endl;
        }

    } while (opcion != "3");

    return 0;
}
