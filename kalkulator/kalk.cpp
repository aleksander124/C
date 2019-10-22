#include <iostream>

using namespace std;

int a, b, polecenie;

int main(void)
{
    setlocale(LC_ALL,"");
    do {
        std::cout << "[1] Dodawanie"
        << std::endl << "[2] Odejmowanie"
        << std::endl << "[3] Mnozenie"
        << std::endl << "[4] Dzielenie"
        << std::endl << "[5] Rezygnuj"
        << std::endl << "Twoje polecenie: ";

        std::cin >> polecenie;

        if ( polecenie == 5){
            break;
        }

        std::cout << "Podaj pierwsza liczbe:";
        std::cin >> a;
        std::cout << "Podaj druga liczbe:";
        std::cin >> b;

        switch ( polecenie ) {
        case 1:

            std::cout << "Wynik: " << a + b << std::endl;
            break;

        case 2:

            std::cout << "Wynik: " << a - b << std::endl;
            break;

        case 3:

            std::cout << "Wynik: " << a * b << std::endl;
            break;

        case 4:

            std::cout << "Wynik: " << a / b << std::endl;
            break;

        default:
            std::cout << "Nieprawidlowe polecenie." << std::endl;
        }
    } while( polecenie != 5 );

    std::cout << "Do zobaczenia";
    return 0;
}
