#pragma once
#include <string>
#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define BLUE    "\033[34m"

namespace Adivino {

    using namespace std;

    class adiv {
    public:
        static void adivino();

        // Variables compartidas
        static string volverAJugar;
        static int contadorMuertes;
        static int contadorPsicopata;
        static int contadorPacifista;
        static int contadorPersonaNormal;
        static int contadorTonto;
        static int contadorListo;

        static bool esNumero(const string& str) {
            for (char c : str) {
                if (!isdigit(c)) {
                    return false;
                }
            }
            return true;
        }

    };

}
